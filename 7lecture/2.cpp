#include <iostream>

using namespace std;

// 22:00 - 01:00
// 23:00 - 02:00

// 01:00-23:00
// 12:00-12:00
// 22:00-02:00

// 60-1380
// 0-1440
// 1320-1440-0-120

int main() {
  int n;
  cin >> n;

  int shops = n;

  int DAY_MINUTES = 24 * 60;
  int workingHours[DAY_MINUTES];

  for(int i = 0; i < DAY_MINUTES; i++) {
    workingHours[i] = 0;
  }

  int max = 0;

  for(int i = 0; i < shops; i++) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int start = A * 60 + B;
    int end = C * 60 + B;

    if(start == end) {
      n--;
    } else if(start < end) {
      for(int j = start; j < end; j++) {
        workingHours[j]++;
        if(workingHours[j] > max) {
          max = workingHours[j];
        }
      }
    } else if(start > end) {
      for(int j = start; j < DAY_MINUTES; j++) {
        workingHours[j]++;
        if(workingHours[j] > max) {
          max = workingHours[j];
        }
      }

      for(int j = 0; j < end; j++) {
        workingHours[j]++;
        if(workingHours[j] > max) {
          max = workingHours[j];
        }
      }
    }
  }

  if(max != n) {
    cout << 0;
    return 0;
  }

  int count = 0;
  for(int i = 0; i < DAY_MINUTES; i++) {
    if(workingHours[i] == max) count++;
  }

  cout << count;
  
  return 0;
}