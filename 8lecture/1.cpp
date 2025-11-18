#include <iostream>

using namespace std;

int main() {
  string s = "Hello World!";
  int count = 0;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] != ' ') count++;
  }

  cout << count;

  return 0;
}