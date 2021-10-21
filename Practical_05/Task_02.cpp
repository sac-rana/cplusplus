#include <iostream>

using namespace std;
int main() {
  char c = 'a';
  bool b = true;
  short s = 23;
  int i = 2314;
  long l = 4123;
  float f = 3.5;
  double d = 22.5623;
  long double ld = 2.3421;
  wchar_t wc = 'a';
  cout << sizeof(char) << " " << sizeof(c) << '\n';
  cout << sizeof(bool) << " " << sizeof(b) << '\n';
  cout << sizeof(short) << " " << sizeof(s) << '\n';
  cout << sizeof(int) << " " << sizeof(i) << '\n';
  cout << sizeof(long) << " " << sizeof(l) << '\n';
  cout << sizeof(float) << " " << sizeof(f) << '\n';
  cout << sizeof(double) << " " << sizeof(d) << '\n';
  cout << sizeof(long double) << " " << sizeof(ld) << '\n';
  cout << sizeof(wchar_t) << " " << sizeof(wc) << '\n';

  return 0;
}