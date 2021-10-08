#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  cout << "Enter first string: ";
  getline(cin, s1);
  cout << "Enter second string: ";
  getline(cin, s2);
  if (s1.compare(s2) == 0)
    cout << "The strings are equal.\n";
  else if (s1.compare(s2) < 0)
    cout << "The first string is less than second string\n";
  else
    cout << "The first string is greater than second string\n";
  return 0;
}