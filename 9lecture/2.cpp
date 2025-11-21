#include <iostream>
#include <map>

using namespace std;

int main() {
  string s = "hello world";

  map<char, int> mp;

  for(int i = 0; i < s.size(); i++) {
    char c = s[i];
    mp[c]++;
  }

  for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << ": " << it->second << endl;
  }

  return 0;
}