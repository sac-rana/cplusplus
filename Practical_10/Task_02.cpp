#include <iostream>
using namespace std;

class Student {
 public:
  string name;
  int roll_no;
  string phone_number;
  string address;
  Student(string _name, int _roll_no, string _phone_number, string _address) {
    name = _name;
    roll_no = _roll_no;
    phone_number = _phone_number;
    address = _address;
  }
};

int main() {
  Student *s = new Student("Rohan", 24, "123", "abc street");
  cout << "Name: " << s->name << '\n';
  cout << "Roll no: " << s->roll_no << '\n';
  cout << "Phone number: " << s->phone_number << '\n';
  cout << "Address: " << s->address << '\n';
  return 0;
}