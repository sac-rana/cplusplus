#include <iostream>
using namespace std;

class Mammals {
 public:
  void say1() { cout << "I am a mammal.\n"; }
};

class MarineAnimals {
 public:
  void say2() { cout << "I am a marine animal.\n"; }
};

class BlueWhale : public Mammals, public MarineAnimals {
 public:
  void say3() {
    cout << "I belong to both the categories: Mammals as well as Marine "
            "animals.\n";
  }
};

int main() {
  BlueWhale bw;
  bw.say1();
  bw.say2();
  bw.say3();
  return 0;
}