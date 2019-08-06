#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace std;


class Node
{
public:
  Node *Left;
  Node *Right;
  int Data;

  Node(int data)
  {
    Left = NULL;
    Right = NULL;
    Data = data;
  }
};



class Tree
{
private:
  Node *root;
  Node *llRoot;
  bool isLinkedList;

  void AddNodePrivate(Node *currNode, Node *newNode)
  {
    
    if (newNode->Data > currNode->Data)
      {
	
	if (currNode->Right == NULL)
	  {
	    currNode->Right = newNode;
	    return;
	  }
	else
	  {
	    AddNodePrivate(currNode->Right, newNode);
	  }
      }

    if (newNode->Data < currNode->Data )
      {
	if (currNode->Left == NULL)
	  {
	    currNode->Left = newNode;
	    return;
	  }
	else
	  {
	    AddNodePrivate(currNode->Left, newNode);
	  }
      }

    root = Balance(root);
  }

  void PrintOutInOrderPrivate(Node *node)
  {
    if (node == NULL)
      {
	return;
      }

    PrintOutInOrderPrivate(node->Left);
    cout << node->Data << " ";
    PrintOutInOrderPrivate(node->Right);
  }

  void PrintOutPreOrderPrivate(Node *node)
  {
    if (node == NULL)
      {
	return;
      }

    cout << node->Data << " ";
    PrintOutPreOrderPrivate(node->Left);
    PrintOutPreOrderPrivate(node->Right);
  }

  void PrintOutPostOrderPrivate(Node *node)
  {
    if (node == NULL)
      {
	return;
      }

    PrintOutPostOrderPrivate(node->Left);
    PrintOutPostOrderPrivate(node->Right);
    cout << node->Data << " ";
  }

  void DeleteTree(Node *node)
  {
    if (node == NULL)
      {
	return;
      }

    if (node->Left != NULL)
      {
	DeleteTree(node->Left);
      }

    if (node->Right != NULL)
      {	
	DeleteTree(node->Right);
      }

    delete node;
  }

  void DeleteLinkedList(Node *root)
  {
    while( root != NULL)
      {
	Node *tmp = root->Right;
	delete root;
	root = tmp;
      }
  }

  int HeightPrivate(Node *node)
  {
    int currHeight = 0;

    if (node != NULL)
      {
	int l_height = HeightPrivate(node->Left);
	int r_height = HeightPrivate(node->Right);
	int max_height = max(l_height, r_height);
	currHeight = max_height + 1;
      }

    return currHeight;
  }

  int Difference(Node *node)
  {
    int l_height = HeightPrivate(node->Left);
    int r_height = HeightPrivate(node->Right);
    int diff = l_height - r_height;
    return diff;
  }

  Node* RightRightRotate(Node *node)
  {
    Node *t = node->Right;
    node->Right = t->Left;
    t->Left = node;
    return t;
  }

  Node *LeftLeftRotate(Node *node)
  {
    Node *t = node->Left;
    node->Left = t->Right;
    t->Right = node;
    return t;
  }

  Node *LeftRightRotate(Node *node)
  {
    Node *t = node->Left;
    node->Left = RightRightRotate(t);
    return LeftLeftRotate(node);
  }

  Node *RightLeftRotate(Node *node)
  {
    Node *t = node->Right;
    node->Right = LeftLeftRotate(t);
    return RightRightRotate(node);
  }

  Node *Balance(Node *node)
  {
    int diff = Difference(node);
    if (diff > 1)
      {
	if (Difference(node->Left) > 0)
	  {
	    node = LeftLeftRotate(node);
	  }
	else
	  {
	    node = LeftRightRotate(node);
	  }
      }
    else if (diff < -1)
      {
	if (Difference(node->Right) > 0)
	  {
	    node = RightLeftRotate(node);
	  }
	else
	  {
	    node = RightRightRotate(node);
	  }
      }

    return node;
  }

  void PrettyPrintPrivate(Node *node, int l)
  {
    int i;
    if (node != NULL)
      {
	PrettyPrintPrivate(node->Right, l+1);
	cout << " ";
	if (node == root)
	  {
	    cout << "Root -> ";
	  }
	for(i = 0; (i < l) && (node != root); i++)
	  {
	    cout << " ";
	  }
	cout << node->Data;
	PrettyPrintPrivate(node->Left, l+1);
      }
  }


  Node *CreateLinkedListPrivate(Node *node)
  {
    if (node == NULL)
      {
	return node;
      }

    Node *newNode = new Node(node->Data);
    if (node->Left != NULL)
      {
	Node *temp = CreateLinkedListPrivate(node->Left);
	for (; temp->Right != NULL; temp = temp->Right);
	temp->Right = newNode;
	newNode->Left = temp;
      }
    
    if (node->Right != NULL)
      {
	Node *temp = CreateLinkedListPrivate(node->Right);
	for (; temp->Left != NULL; temp = temp->Left);
	temp->Left = newNode;
	newNode->Right = temp;
      }
    
    return newNode;
  }

  void PrintOutLinkedListPrivate(Node *node)
  {
    while (node != NULL)
      {
	cout << node->Data << " ";
	node = node->Right;
      }
  }
  
public:
  Tree()
  {
    root = NULL;
    isLinkedList = false;
  }

  ~Tree()
  {
    if (isLinkedList)
      {
	DeleteLinkedList(llRoot);	
	
      }
    DeleteTree(root);
  }

  void AddNode(Node *node)
  {
    if (root == NULL)
      {
	root = node;
	return;
      }

    AddNodePrivate(root, node);
    CreateLinkedListFromTree();
  }

  void PrintOutInOrder()
  {
    PrintOutInOrderPrivate(root);
    cout << endl;
  }

  void PrintOutPreOrder()
  {
    PrintOutPreOrderPrivate(root);
    cout << endl;
  }

  void PrintOutPostOrder()
  {
    PrintOutPostOrderPrivate(root);
    cout << endl;
  }

  void PrintOutLinkedList()
  {
    if (!isLinkedList)
      {
	cout << "No linked list created yet" << endl;
	return;
      }

    PrintOutLinkedListPrivate(llRoot);
    cout << endl;
  }

  int Height()
  {
    return HeightPrivate(root);
  }

  void PrettyPrint()
  {
    PrettyPrintPrivate(root, 1);
  }

  void CreateLinkedListFromTree()
  {
    if (isLinkedList)
      {
	DeleteLinkedList(llRoot);
      }

     llRoot = CreateLinkedListPrivate(root);
     while (llRoot->Left != NULL) llRoot = llRoot->Left;

     isLinkedList = true;
  }

  void CreateTreeFromLinkedList()
  {
    if (root != NULL)
      {
	cout << "Already in tree form" << endl;
	return;
      }
    
    stack<Node> tmpStack;

    Node *curr = llRoot;
    while(curr != NULL)
      {
	// NULL out the left side of the DLL.
	curr->Left = NULL;
	tmpStack.push((*curr));
	curr = curr->Right;
      }

    root = NULL; 
    while(!tmpStack.empty())
      {
	Node tmp = tmpStack.top();
	tmpStack.pop();
	Node *tmp2 = new Node(tmp.Data);
	AddNode(tmp2);
      }
  }
};


int main(int argc, char **argv)
{
  Tree tr;

  Node *newNode;

  for(int i=0; i<100; i++)
    {
      int rndInt = rand() % 100;
      int negInt = rand() % 2;

      if (negInt == 0)
	{
	  newNode = new Node(rndInt);
	}
      else
	{
	  newNode = new Node(-rndInt);
	}
      tr.AddNode(newNode);
    }

  cout << "In Order Traversal" << endl;
  tr.PrintOutInOrder();

  cout << "`Pre Order Traversal" << endl;
  tr.PrintOutPreOrder();

  cout << "Post Order Traversal" << endl;
  tr.PrintOutPostOrder();

  cout << "Height" << endl;
  cout << tr.Height() << endl;

  tr.CreateLinkedListFromTree();
  cout << "Linked List" << endl;
  tr.PrintOutLinkedList();
  
  // Should print out an error
  tr.CreateLinkedListFromTree();
  tr.CreateTreeFromLinkedList();

  cout << endl << endl;
  tr.PrintOutInOrder();
  tr.PrintOutLinkedList();
}
