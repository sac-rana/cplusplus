#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
  int n = s.length();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) return false;
  }
  return true;
}

int main() {
  cout << "Enter a string: ";
  string s;
  getline(cin, s);
  if (isPalindrome(s))
    cout << "String \"" << s << "\" is a palindrome.\n";
  else
    cout << "This string is not a palindrome\n";
  return 0;
}