#include <iostream>
using namespace std;

class A {
 public:
  int x;
};

class B : virtual public A {
 public:
  int y;
};

class C : virtual public A {
 public:
  int z;
};

class D : public B, public C {
 public:
  void say() {
    cout << "x is " << x << '\n';  // x is not ambiguous anymore
    cout << "y: " << y << ", z: " << z << '\n';
  }
};

int main() {
  D obj;
  obj.x = 234;
  obj.y = 1;
  obj.z = 2;
  obj.say();
}