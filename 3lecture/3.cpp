#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  char t;
  cin >> t;

  int first = -1;
  int last = -1;

  for (int i = 0; i < s.size(); i++) {
    if(s[i] == t) {
      if(first < 0) {
        first = i;
      } else {
        last = i;
      }
      // first < 0 ? first = i : last = i;
    }
  }

  cout << first << " " << last;
  return 0;
}