#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 4
// 1 6
// 3 - 1
// 2 3
// 1 4

// 1 4
// 1 6
// 2 3
// 3 - 1

struct Point {
  int x, y;
};

int sortingFunc(Point a, Point b) {
  if(a.x == b.x) {
    return a.y < b.y;
  }

  return a.x < b.x;
}

int main() {
  int n;
  cin >> n;

  vector<Point> v;

  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    Point p = { x, y };
    v.push_back(p);
  }

  sort(v.begin(), v.end(), sortingFunc);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i].x << " " << v[i].y << endl;
  }
  return 0;
}