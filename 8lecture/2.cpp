#include <iostream>
using namespace std;

// 4
// 100 50 30 20

// 100 -1 50 30 20

int main() {
  int n;
  cin >> n;

  int a[n];

  int max;
  for(int i = 0; i < n; i++) {
    cin >> a[i];

    if(i == 0) max = a[i];

    if(max < a[i]) {
      max = a[i];
    }
  }


  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
    if(a[i] == max) {
      cout << -1 << " ";
    }
  }
  return 0;
}