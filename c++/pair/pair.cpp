#include <iostream>
#include <utility>

using namespace std;

int main()
{
  pair <int, int> p1;
  pair <int, int> p2;

  p1.first = 1;
  p1.second = 2;

  p2.first = 1;
  p2.second = 2;

  cout << (p1 == p2) << endl;

  p2.first = 3;
  cout << (p1 == p2) << endl;

  return 0;
}
