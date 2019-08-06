#include <iostream>

using namespace std;

class Node
{
public:
  Node *Next;
  int Data;
};


class LinkedList
{
private:
  Node *root;
  int currLength;

  void FindNodeAtIndex(int index, Node **prevNode, Node **currNode)
  {
    int pos = 0;
    *currNode = root;
    *prevNode = root;
    
    while( (pos < index ) && (currNode != NULL))
      {
	pos++;
	*prevNode = *currNode;
	*currNode = (*currNode)->Next;
      }
  }


  
public:
  LinkedList()
  {
    currLength = 0;
    root = NULL;
  }

  ~LinkedList()
  {
    if (root == NULL)
      {
	return;
      }

    Node *currNode = root;

    while (currNode != NULL)
      {
	Node *tmp = currNode->Next;
	delete currNode;
	currNode = tmp;
      }
  }
  
  void AddNode(Node *newNode)
  {
    if (root == NULL)
      {
	root = newNode;
	return;
      }

    // Always add to front.
    newNode->Next = root;
    root = newNode;
    currLength++;
  }

  void RemoveAt(int index)
  {
    if (index > (currLength-1))
      {
	return;
      }

    // Special case the root node
    if (index == 0)
      {
	Node *tmp = root->Next;
	delete root;
	root = tmp;
	return;
      }

    Node *prevNode = NULL;
    Node *currNode = NULL;
    FindNodeAtIndex(index, &prevNode, &currNode);
    
    // At the index position, so remove the node and redo the pointers
    prevNode->Next = currNode->Next;
    delete currNode;
    
    currLength--;
  }

  void AddAt(int index, Node *newNode)
  {
    if (index > (currLength-1))
      {
	return;
      }

    Node *prevNode = NULL;
    Node *currNode = NULL;
    FindNodeAtIndex(index, &prevNode, &currNode);

    prevNode->Next = newNode;
    newNode->Next = currNode;
  }

  int Length()
  {
    return currLength;
  }

  void PrintOut()
  {
    Node * currNode = root;

    while(currNode != NULL)
      {
	cout << currNode->Data << " ";
	currNode = currNode->Next;
      }

      cout << endl;
  }
};

int main(int argc, char **argv)
{
  LinkedList ll;
  Node *node1 = new Node();
  node1->Data = 4;
  ll.AddNode(node1);

  Node *node2 = new Node();
  node2->Data = 18;
  ll.AddNode(node2);

  Node *node3 = new Node();
  node3->Data = 0;
  ll.AddNode(node3);
  ll.PrintOut();

  Node *node4 = new Node();
  node4->Data = -4;
  ll.AddAt(1, node4);
  ll.PrintOut();

  ll.RemoveAt(0);
  ll.PrintOut();
  
}
