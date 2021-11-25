#include <iostream>
using namespace std;

class Temp {
 public:
  void temp_func() { func_count++; }
  static int func_count;
};

int Temp::func_count = 0;

int main() {
  Temp t1, t2, t3;
  t1.temp_func();
  t2.temp_func();
  cout << "temp_func called " << Temp::func_count << " times\n";
  return 0;
}
