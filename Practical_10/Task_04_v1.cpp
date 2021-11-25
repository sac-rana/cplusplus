#include <iostream>
using namespace std;

class Number {
 public:
  int n;
  Number(int a) { n = a; }
  friend bool operator<(Number&, Number&);
};

bool operator<(Number& s1, Number& s2) { return s1.n < s2.n; }

int main() {
  Number a(5), b(18);
  cout << (a < b);
  return 0;
}
