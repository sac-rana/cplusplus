#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a string: ";
  string s;
  getline(cin, s);
  reverse(s.begin(), s.end());
  cout << "The reversed string using reverse method: " << s << '\n';
  cout << "Reversed string using iterators: ";
  string::iterator it;
  for (it = s.begin(); it != s.end(); it++) {
    cout << *it;
  }
  cout << '\n';
  return 0;
}