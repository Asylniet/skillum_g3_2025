#include <iostream>
#include <vector>

using namespace std;

// 5
// 3 5 3 4 1

// 1 1 2 2 3

int main() {
  int n;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;

    for(int j = 0; j < v.size(); j++) {
      if(v[j] <= x) {
        v.erase(v.begin() + j);
        j--;
      }
    }

    v.push_back(x);

    cout << v.size() << " ";
  }

  return 0;
}