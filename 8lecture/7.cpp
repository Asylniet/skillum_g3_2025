#include <iostream>
using namespace std;

int main() {

    int a;
    cin >> a;

    int min, min2;

    for(int i = 0; i < a; i++){
      int v;
      cin >> v;

      if(i == 0) {
        min = v;
        min2 = v;
      }

      if(min == -1 || v < min){
        min2 = min;
        min = v;
      }
    }

    cout << min2;
    
    return 0;
}