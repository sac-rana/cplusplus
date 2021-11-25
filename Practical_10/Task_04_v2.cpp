#include <iostream>
using namespace std;

class Number {
 public:
  int n;
  Number(int a) { n = a; }
  Number operator+(Number& s) {
    Number t(n + s.n);
    return t;
  }
};

bool operator<(Number& s1, Number& s2) { return s1.n < s2.n; }

int main() {
  Number a(5), b(18);
  Number c = a + b;
  cout << c.n;
  return 0;
}