#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> mp;
  int sum = 0;
  
  for(int i = 0; i < n; i++) {
    int points;
    string name;
    cin >> name >> points;
    
    mp[name] += points;
    sum += points;
  }
  
  vector<int> v;
  for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    v.push_back(it->second);
  }

  sort(v.begin(), v.end());


  for(int i = v.size(); i >= 0; i--) {
    int target = v[i];
    for(map<string, int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
      if(target == it->second) {
        double percent = target / double(sum) * 100;
        cout << it->first << " " << percent << "%" << endl;
        mp.erase(it->first);
        break;
      }
    }
  }



  return 0;
}