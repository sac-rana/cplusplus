#include <iostream>
using namespace std;

class Directory {
 public:
  string name, phone_number, tel_number, address, head_of_family;
  Directory(string n, string add, string ph, string tn, string hof) {
    name = n;
    address = add;
    phone_number = ph;
    tel_number = tn;
    head_of_family = hof;
  }
};

int main() {
  Directory d[] = {Directory("A", "123", "123", "abc", "abc"),
                   Directory("B", "123", "123", "abc", "abc"),
                   Directory("C", "123", "123", "abc", "abc")};
  return 0;
}