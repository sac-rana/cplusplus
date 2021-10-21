#include <ctime>
#include <iostream>
using namespace std;
int main() {
  cout << "Enter :\n"
       << "1. To print current year\n"
       << "2. To print current month\n"
       << "3. To print current day of month\n";
  int n;
  cin >> n;
  time_t now;
  time(&now);
  tm* date;
  date = localtime(&now);
  switch (n) {
    case 1:
      cout << "Current year: " << date->tm_year + 1900 << '\n';
      break;
    case 2:
      cout << "Current month: " << date->tm_mon + 1 << '\n';
      break;
    case 3:
      cout << "Current day of month: " << date->tm_mday << '\n';
      break;
    default:
      cout << "Not applicable.\n";
      break;
  }
  return 0;
}