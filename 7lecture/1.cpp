#include <iostream>

using namespace std;

int main() {
  // att1 + att2 > 30
  // final > 20
  // 0-49 = 0

  // formula: 50 + i * 5 && 49 + (i + 1) * 5
  // 0 50-54 = 1
  // 1 55-59 = 1 + 1/3
  // 2 60-64 = 1 + 2/3
  // 3 65-69 = 2
  // 4 70-74 = 2 + 1/3
  // 5 75-79 = 2 + 2/3
  // 6 80-84 = 3
  // 7 85-89 = 3 + 1/3
  // 8 90-94 = 3 + 2/3
  // 9 95-100 = 4

  // 2.33*4=9.33332
  // 0
  // 0
  // 0
  // 0

  int n;
  cin >> n;

  double sum_gp = 0;
  int sum_credits = 0;
  double multiplier = 0.3333333;

  for(int i = 0; i < n; i++) {
    int att1, att2, final_score, credits;
    cin >> att1 >> att2 >> final_score >> credits;

    sum_credits += credits;

    double gp = 0;
    int grade = att1 + att2 + final_score;

    if(att1 + att2 >= 30 && final_score >= 20 && grade >= 50) {
      for(int j = 0; j < 10; j++) {
        if(grade >= 50 + j * 5 && grade <= 49 + (j + 1) * 5) {
          gp = 1 + j * multiplier;
          break;
        }
      }
    }

    sum_gp += gp * credits;
  }

  cout << sum_gp / sum_credits;

  return 0;
}