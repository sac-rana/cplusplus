#include <iostream>
#include <string>
using namespace std;

int compare(string s1, string s2) {
  int min = s1.length() < s2.length() ? s1.length() : s2.length();
  for (int i = 0; i < min; i++) {
    if (s1[i] == s2[i]) continue;
    return s1[i] - s2[i];
  }
  if (s1.length() > min)
    return 1;
  else if (s2.length() > min)
    return -1;
  return 0;
}

int main() {
  string s1, s2;
  cout << "Enter first string: ";
  getline(cin, s1);
  cout << "Enter second string: ";
  getline(cin, s2);
  if (compare(s1, s2) == 0)
    cout << "The strings are equal.\n";
  else if (compare(s1, s2) < 0)
    cout << "The first string is less than second string\n";
  else
    cout << "The first string is greater than second string\n";
  return 0;
}