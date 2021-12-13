#include <iostream>
using namespace std;

class A {
 public:
  void d1() { cout << "d1 method from class A called\n"; }
};

class B : public A {
 public:
  void d2() { cout << "d2 method from class B called\n"; }
};

int main() {
  B obj;
  obj.d1();
  return 0;
}