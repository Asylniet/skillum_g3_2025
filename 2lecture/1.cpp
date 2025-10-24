#include <iostream>

using namespace std;

int main() {
  int size = 8;

  int row;
  int column;

  cin >> row >> column;
  // 0 -> i < size
  // 0, 1, 2

  // 1 -> i <= size
  // 1, 2, 3
  for(int i = 1; i <= size; i++) {
    for(int j = 1; j <= size; j++) {
      if (i == row && j == column) {
        cout << "X ";
      } else if (i == row || j == column) {
        cout << "* ";
      } else {
        cout << "0 ";
      }
    }
    cout << endl;
  }

  return 0;
}