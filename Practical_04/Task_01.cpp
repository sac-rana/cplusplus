#include <iostream>
using namespace std;

namespace First {
int add(int a, int b) { return a + b; }
}  // namespace First

namespace Second {
float add(float a, float b) { return a + b; }
}  // namespace Second

int main() {
  cout << "3 + 6 = " << First::add(3, 6);
  cout << "\n4.5 + 2.3 = " << Second::add(4.5, 2.3);
  return 0;
}