#include <iostream>
using namespace std;

class College {
 public:
  string name;
  string address;
  int student_strength;
};

struct School {
  string name;
  string address;
  int student_strength;
};

int main() {
  College c;
  c.name = "Gehu";
  c.address = "dehradun";
  c.student_strength = 10000;
  struct School s = {"Rishiram", "abc", 1200};
  cout << "College---->\n";
  cout << "Name: " << c.name;
  cout << "\nAddress: " << c.address;
  cout << "\nStudent strength: " << c.student_strength;
  cout << "\nSchool---->";
  cout << "\nName: " << s.name;
  cout << "\nAddress: " << s.address;
  cout << "\nStudent strength: " << s.student_strength;
  return 0;
}