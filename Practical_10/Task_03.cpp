#include <iostream>
using namespace std;

class Temp {
 public:
  int a, b;
  Temp(int a, int b) {
    this->a = a;
    this->b = b;
  }
  void remainder() { cout << a << " % " << b << " = " << a % b; }
};

int main() {
  Temp t(18, 7);
  t.remainder();
}