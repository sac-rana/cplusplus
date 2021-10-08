#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a string: ";
  string s;
  getline(cin, s);
  cout << "Output string: " << s;
  return 0;
}