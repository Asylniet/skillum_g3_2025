#include <iostream>

using namespace std;

int main() {
  int size = 8;

  int row;
  int column;

  // cout << "Please enter row and column\n";
  cin >> row >> column;

  for(int i = 1; i <= size; i++) {
    for(int j = 1; j <= size; j++) {
      if (i == row && j == column) {
        cout << "X ";
      } else if (
        i == row || 
        j == column || 
        i + column == j + row ||
        i + j == row + column
      ) {
        cout << "* ";
      } else {
        cout << "0 ";
      }
    }
    cout << endl;
  }

  return 0;
}