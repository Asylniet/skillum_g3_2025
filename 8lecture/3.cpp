#include <iostream>
#include <vector>
using namespace std;

// 4
// 100 50 30 20

// 100 -1 50 30 20

int main() {
  int n;
  cin >> n;

  vector<int> v;

  int maxIndex = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);

    if(v[maxIndex] < v[i]) {
      maxIndex = i;
    }
  }

  v.insert(v.begin() + maxIndex + 1, -1);


  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}