#include <iostream>

using namespace std;

double factorial(int n) {
  if (n < 2) return 1;
  return n * factorial(n - 1);
}
int main() {
  cout << "Enter a no. to find factorial of: ";
  int n;
  cin >> n;
  cout << n << "! = " << factorial(n) << '\n';
  return 0;
}