#include <cmath>
#include <iostream>
using namespace std;

double sumOfSeries(int n) {
  if (n < 2) return n;
  return pow(n, n) + n + sumOfSeries(n - 1);
}

int main() {
  cout << "(1^1 + 1) + (2^2 + 2) + (3^3 + 3) + ....\n";
  cout << "Enter a no. n to find the sum of above series upto n terms: ";
  int n;
  cin >> n;
  cout << "Sum upto " << n << " terms is " << sumOfSeries(n);
  return 0;
}