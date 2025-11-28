#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);  

  vector<int>::iterator it = v.end();

  sort(v.begin() + 2, v.end());

  // it -= 2;

  cout << *it;


  return 0;
}