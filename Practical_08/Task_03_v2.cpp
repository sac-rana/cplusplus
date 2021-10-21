#include <iostream>

using namespace std;
int main() {
  int a = 10;
  int *p;
  int **q;
  p = &a;
  q = &p;
  cout << *p << '\n';
  **q = 200;
  cout << **q << '\n';
  return 0;
}