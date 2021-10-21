#include <iostream>

using namespace std;
int main() {
  int arr[] = {10, 20, 30};

  cout << *arr << '\n';

  cout << arr << '\n';

  cout << *(arr + 1) << '\n';
  return 0;
}