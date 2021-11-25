#include <iostream>
using namespace std;

class Student {
 public:
  string name;
  int age;
  int year;
  char section;
  int marks;
  Student(string _name, int _age, int _year, char _section, int _marks) {
    name = _name;
    age = _age;
    year = _year;
    section = _section;
    marks = _marks;
  }
};

int main() {
  Student student_list[] = {
      Student("Sam", 12, 2001, 'A', 91),
      Student("John", 34, 1999, 'B', 81),
      Student("John", 18, 2002, 'C', 86),
      Student("John", 51, 2000, 'D', 71),
  };
  int total_marks = 0;
  for (int i = 0; i < 4; i++) {
    total_marks += student_list[i].marks;
  }
  cout << "Total marks: " << total_marks << '\n';
  return 0;
}