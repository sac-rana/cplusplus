#include <fstream>
#include <ios>
#include <iostream>
#include <string>
using namespace std;

int main() {
  fstream myFile;
  myFile.open("example.txt", ios::in);
  if (myFile.is_open()) {
    char ch;
    while (myFile >> noskipws >> ch) {
      cout << ch;
    }
    cout << '\n';
    myFile.close();
  } else
    cout << "Unable to open file to read.\n";

  myFile.open("example.txt", ios::out);
  if (myFile.is_open()) {
    myFile << "Extra text added by me\n";
    myFile << "What are yoou doinnnn\n";
    myFile.close();
  }
  myFile.open("example.txt", ios::app);
  if (myFile.is_open()) {
    myFile
        << "This is a sentence written by me. I am  a student in a college.\n";
    myFile.close();
  }
  myFile.open("example.txt", ios::in);
  int noc, nol, now;
  noc = nol = now = 0;
  if (myFile.is_open()) {
    char ch;
    while (myFile >> noskipws >> ch) {
      noc++;
      if (ch == ' ')
        now++;
      else if (ch == '\n') {
        now++;
        nol++;
      }
    }
    myFile.close();
  }
  cout << "No. of lines: " << nol << "\nNo. of words: " << now
       << "\nNo. of characters: " << noc << '\n';
  return 0;
}