#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;

    int min1;
    int min2;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        v.push_back(x);

        if(i == 0) {
          min1 = v[i];
          min2 = v[i];
        }

        if(v[i] < min1) {
          min2 = min1;
          min1 = v[i];
        }
    }
    cout << min2;
    return 0;
}


// 3 4 2 5 1 6
// 1 2 3 4 5 6