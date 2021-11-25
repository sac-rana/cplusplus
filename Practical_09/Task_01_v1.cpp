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
  void display() {
    cout << "Student name: " << name << '\n';
    cout << "Roll no: " << roll_no << '\n';
    cout << "Phone number: " << phone_number << '\n';
    cout << "Address: " << address << '\n';
  }
};

int main() {
  Student s1("Sam", 12, "2356983498", "Turner Road, Street 2");
  Student s2("John", 34, "8756975895", "Near Graphic Era, Post Office Road");
  s1.display();
  cout << '\n';
  s2.display();
  return 0;
}