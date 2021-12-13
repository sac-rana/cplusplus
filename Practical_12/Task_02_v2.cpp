#include <iostream>
using namespace std;

class A {
 public:
  ~A() { cout << "Destructor A called\n"; }
};

class B : public A {
 public:
  ~B() { cout << "Destructor B called\n"; }
};

class C : public B {
 public:
  ~C() { cout << "Destructor C called\n"; }
};

int main() {
  C obj;
  return 0;
}
