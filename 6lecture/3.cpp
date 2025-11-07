#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, string> mp;

  for(int i = 1; i <= 10; i++) {
    mp[i] = "hello";
    mp[i * 2] = "double";
  }

  for(map<int, string>::iterator it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << " - " << it->second << endl;
  }

  cout << endl << "REVERSE" << endl;

  for(map<int, string>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
    cout << it->first << " - " << it->second << endl;
  }

  return 0;
}