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
  void print() {
    cout << "Name: " << name;
    cout << "\nAddress: " << address;
    cout << "\nPhone number: " << phone_number;
    cout << "\nTelephone number: " << tel_number;
    cout << "\nHead of family: " << head_of_family << '\n';
  }
};

int main() {
  Directory d[] = {Directory("A", "123", "123", "abc", "abc"),
                   Directory("B", "123", "123", "abc", "abc"),
                   Directory("C", "123", "123", "abc", "abc")};
  for (int i = 0; i < 3; i++) {
    d[i].print();
  }
  return 0;
}