#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  bool isPalindrome = true;

  for(int i = 0; i < s.size() / 2; i++) {
    int end_index = s.size() - 1 - i;
    if(s[i] != s[end_index]) {
      isPalindrome = false;
      break;
    }
  }

  if(!isPalindrome) {
    cout << "NO";
  } else {
    cout << "YES";
  }

  // isPalindrome ? cout << "YES" : cout << "NO";

  return 0;
}