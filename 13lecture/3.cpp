#include <iostream>

using namespace std;

struct Student {
  int grades[15], final_points, total;

  void calcTotal() {
    total = 0;
    for(int i = 0; i < 15; i++) {
      total += grades[i];
    }

    total += final_points;
  }

  string getGrade() {
    calcTotal();

    if(total < 50) return "F";
    else if(total < 55) return "D";
    else if(total < 60) return "D+";
    else if(total < 65) return "C-";
    else if(total < 70) return "C";
    else if(total < 75) return "C+";
    else if(total < 80) return "B-";
    else if(total < 85) return "B";
    else if(total < 90) return "B+";
    else if(total < 95) return "A-";
    else return "A";
  }
};

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    Student s;
    for(int j = 0; j < 15; j++) {
      int x;
      cin >> x;
      s.grades[j] = x;
    }

    cin >> s.final_points;

    cout << s.getGrade() << endl;
  }
  return 0;
}