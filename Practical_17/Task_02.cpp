#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
  for (auto it{v.begin()}; it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << '\n';
}

int main() {
  vector<int> v{2, 6, 71, 23, 9, 7, 21};
  v.push_back(100);
  printVector(v);
  cout << "size: " << v.size() << ", Max size: " << v.max_size() << '\n';
  v.resize(3);
  printVector(v);
  cout << "Is vector empty: " << v.empty() << '\n';
  return 0;
}