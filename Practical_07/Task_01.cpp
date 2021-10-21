#include <iostream>
using namespace std;
int main() {
  cout << "Enter :\n"
       << "1. To print current year\n"
       << "2. To print current month\n"
       << "3. To print current day of month\n";
  int n;
  cin >> n;
  switch (n) {
    case 1:
      cout << "Current year: 2021" << '\n';
      break;
    case 2:
      cout << "Current month: October" << '\n';
      break;
    case 3:
      cout << "Current day of month: 20" << '\n';
      break;
    default:
      cout << "Not applicable.\n";
      break;
  }
  return 0;
}