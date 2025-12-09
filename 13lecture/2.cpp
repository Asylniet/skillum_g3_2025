#include <iostream>
#include <vector>

using namespace std;

struct Student {
  string id, name;
  float average;

  void saveAverage(int calc, int eng, int pp1) {
    average = (calc + eng + pp1) / 3.0;
  };
};

int main() {
  int n;
  cin >> n;

  vector<Student> v;

  for(int i = 0; i < n; i++) {
    string id, name;
    int calc, eng, pp1;

    cin >> id >> name >> calc >> eng >> pp1;

    Student s;
    s.id = id;
    s.name = name;
    s.saveAverage(calc, eng, pp1);

    v.push_back(s);
  }

  Student best = v[0];

  for(int i = 0; i < v.size(); i++) {
    cout << v[i].id << " " << v[i].name << ": Average=" << v[i].average << endl;

    if(best.average < v[i].average) {
      best = v[i];
    }
  }

  cout << "The best student: " << best.name << " with the average grade of " << best.average;

  return 0;
}