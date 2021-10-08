#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
  cout << "Enter a number to check whether it is prime or not.\n";
  int n;
  cin >> n;
  if (isPrime(n))
    cout << "The number " << n << " is prime.\n";
  else
    cout << "The number " << n << " is prime.\n";
  return 0;
}

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}