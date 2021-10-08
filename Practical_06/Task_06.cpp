#include <iostream>
using namespace std;

int main() {
  string s = "hello";
  cout << &s << "\n";
  s[0] = 'J';
  cout << &s << '\n';
  cout << s;
  return 0;
}