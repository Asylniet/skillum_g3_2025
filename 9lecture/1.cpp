#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, pair<int, int> > mp;
  // mp["asman"] = { 8, 2 }

  for(int i = 0; i < n; i++) {
    int gpa;
    string name;
    cin >> name >> gpa;

    mp[name].first += gpa;
    mp[name].second++;
  }

  for(map<string, pair<int, int> >::iterator it = mp.begin(); it != mp.end(); it++) {
    pair<int, int> p = it->second;
    double sum = p.first;
    double count = p.second;

    cout << it->first << " ";
    printf("%.3f", double(sum / count));
    cout << endl;
  }

  return 0;
}