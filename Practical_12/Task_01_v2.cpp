#include <iostream>
using namespace std;

class A {
 public:
  int x;

 protected:
  int y;

 private:
  int z;
};
class B : public A {
  // x public
  // y protected
  // z not accessible
};

class C : protected A {
  // x protected
  // y protected
  // z not accessible
};

class D : private A {
  // x is private
  // y is private
  // z not accessible
};

int main() {
  B b;
  C c;
  D d;
  b.x = 1;
  // b.y = 2; // not possible, y is a protected member of class B
  // c.x = 1; c.y = 2 // not possible, x and y are protected member of class C
  // d.x = 1; d.y = 2 // not possible, a and y are private member of class D
  return 0;
}