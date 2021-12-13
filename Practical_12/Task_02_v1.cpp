#include <iostream>
using namespace std;

class A {
 public:
  A() { cout << "Constructor A called\n"; }
};

class B : public A {
 public:
  B() { cout << "Constructor B called\n"; }
};

class C : public B {
 public:
  C() { cout << "Constructor C called\n"; }
};

int main() {
  C obj;
  return 0;
}
