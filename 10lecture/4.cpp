#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, string> mp;

  for(int i = 0; i < n; i++) {
    string name, password;
    cin >> name >> password;
    mp[name] = password;
  }

  int attempts;
  cin >> attempts;
  for(int i = 0; i < attempts; i++) {
    string name, password;
    cin >> name >> password;

    // name not found
    if(mp.find(name) == mp.end()) {
      cout << "login error" << endl;
      continue;
    }

    // if(mp.find(name) != mp.end())
    // name found

    if(mp[name] == password) {
      cout << "correct password" << endl;
    } else {
      cout << "password error" << endl;
    }
  }

  return 0;
}