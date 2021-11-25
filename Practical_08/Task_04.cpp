#include <iostream>
using namespace std;

double factorial(int n) {
  double rslt = 1;
  for (int i = n; i > 1; i--) {
    rslt *= i;
  }
  return rslt;
}

int main() {
  cout << "Enter a no. to find factorial of: ";
  int n;
  cin >> n;
  cout << n << "! = " << factorial(n) << '\n';
  return 0;
}