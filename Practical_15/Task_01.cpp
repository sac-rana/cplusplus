#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ofstream fileWrite;
  fileWrite.open("example.txt");
  if (fileWrite.is_open()) {
    fileWrite << "Hey This is me your friend James\n";
    fileWrite.close();
  } else
    cout << "Unable to open file to write.\n";
  ifstream fileRead;
  fileRead.open("example.txt");
  if (fileRead.is_open()) {
    string line;
    while (getline(fileRead, line)) {
      cout << line << '\n';
    }
    fileRead.close();
  } else
    cout << "Unable to open file to read.\n";
}