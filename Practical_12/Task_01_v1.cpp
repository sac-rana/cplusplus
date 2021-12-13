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

int main() { return 0; }