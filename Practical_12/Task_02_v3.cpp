#include <iostream>
using namespace std;

class A {
 public:
  int x;
  A(int _x) { x = _x; }
};

class B : public A {
 public:
  int y;
  B(int _x, int _y) : A(_x) { y = _y; }
};

int main() {
  B obj(2, 3);
  cout << "B.x = " << obj.x << ", B.y = " << obj.y << '\n';
  return 0;
}
