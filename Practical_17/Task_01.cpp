#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l) {
  for (auto it{l.begin()}; it != l.end(); it++) {
    cout << *it << " ";
  }
  cout << '\n';
}

int main() {
  list<int> l{1, 8, 31, 7, 7, 2, 11};
  cout << "List\n";
  printList(l);
  cout << "Size of list: " << l.size() << '\n';
  cout << "Sorted List\n";
  l.sort();
  printList(l);
  cout << "Reversed list\n";
  l.reverse();
  printList(l);
  return 0;
}