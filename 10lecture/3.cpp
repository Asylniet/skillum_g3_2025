#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }

  map<int, int>::reverse_iterator it = mp.rbegin();
  it++;
  cout << it->second;
  return 0;
}