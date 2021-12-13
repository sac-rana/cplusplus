#include <iostream>
using namespace std;

class A {
 public:
  int x;
};

class B {
 public:
  int x;
};

class C : public A, public B {
 public:
  void say() {
    // cout << "x is " << x; // x is ambiguous
    cout << "A::x is " << A::x << ", B::x is " << B::x
         << '\n';  // With scope resolution x is not ambiguous
  }
};

int main() {
  C obj;
  obj.A::x = 1;
  obj.B::x = 2;
  obj.say();
}