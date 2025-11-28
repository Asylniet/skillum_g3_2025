#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, int> mp;

  mp[0] = 1;
  mp[1] = 1;
  mp[2] = 1;
  mp[3] = 1;


  map<int, int>::iterator it = mp.begin();
  for(int i = 0; i < 2; i++) {
    it++;
  }

  while(it != mp.end()) {
    cout << it->first << " " << it->second << endl;
    it++;
  }

  return 0;
}