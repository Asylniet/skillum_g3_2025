#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  map<string, set<int> > mp;

  for(int i = 0; i < n; i++) {
    string name;
    int date;
    cin >> name >> date;

    mp[name].insert(date);
    // mp[name] gives set<int> and set<int> has insert() function
  }

  for(map<string, set<int> >::iterator it = mp.begin(); it != mp.end(); it++) {
    // it->second gives set<int> and set<int> has size() function
    if(it->second.size() >= 3) {
      cout << it->first << " +1" << endl;
    } else {
      cout << it->first << " NO BONUS" << endl;
    }
  }

  return 0;
}