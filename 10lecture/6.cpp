#include <iostream>
#include <stack>

using namespace std;

int main() {
  string s;
  cin >> s;

  stack<int> st;
  for(int i = s.size() - 1; i >= 0; i--) {
    int digit = s[i] - '0';

    if(!st.empty() && st.top() == 1 && digit == 1) {
      st.pop();
      continue;
    }

    st.push(digit);
  }

  while(!st.empty()) {
    cout << st.top();
    st.pop();
  }

  return 0;
}