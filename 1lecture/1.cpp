#include <iostream>
using namespace std;

int main() {
  // 0 -> '0'
  // '0' -> 0
  // char c;
  // cin >> c;
  // cout << int(c) - int('0') + 2;

  // "102" -> 102
  // "102" -> 1 * 100 + 0 * 10 + 2 * 1

  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    cout << int(s[i]) - '0' << endl;
  }

  // XOR
  // 10 - 1010
  // 5 - 0101
  // 15 - 1111

  // 1010
  // 0101
  // ----
  // 1111

  return 0;
}