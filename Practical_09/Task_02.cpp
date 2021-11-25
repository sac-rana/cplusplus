#include <iostream>
using namespace std;

class Rectangle {
  int length, breadth;

 public:
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }
  Rectangle(int a) { length = breadth = a; }
  void area() { cout << "Area: " << length * breadth << '\n'; }
};

int main() {
  Rectangle a(4);
  Rectangle b(5, 8);
  a.area();
  b.area();
  return 0;
}
