#include <iostream>
using namespace std;

class Student {
  string name;
  int age;
  int year;
  char section;
  int marks;

 public:
  Student(string _name, int _age, int _year, char _section, int _marks) {
    name = _name;
    age = _age;
    year = _year;
    section = _section;
    marks = _marks;
  }
  friend void printDetails(Student&);
};

void printDetails(Student& s) {
  cout << "Name: " << s.name;
  cout << "\nAge: " << s.age;
  cout << "\nmarks: " << s.marks << '\n';
}

int main() {
  Student s("Alok", 20, 2001, 'A', 99);
  printDetails(s);
  return 0;
}