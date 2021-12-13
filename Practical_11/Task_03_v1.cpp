#include <iostream>
using namespace std;

class A {
 public:
  int x;
};

class B : public A {
 public:
  int y;
};

class C : public A {
 public:
  int z;
};

class D : public B, public C {
 public:
  void say() {
    // cout << "x is " << x; //x is ambiguous
    cout << "y: " << y << ", z: " << z << '\n';
  }
};

int main() {
  D obj;
  obj.y = 1;
  obj.z = 2;
  obj.say();
}