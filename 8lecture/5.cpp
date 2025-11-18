#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int max, secondMax;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if(i == 0) {
      max = x;
      secondMax = max;
    }

    if(max < x) {
      secondMax = max;
      max = x;
    }
  }

  cout << secondMax;

  return 0;
}