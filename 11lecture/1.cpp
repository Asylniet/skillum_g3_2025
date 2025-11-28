#include <iostream>
#include <stack>
using namespace std;

// (()()) -> YES
// ())( -> NO

int main() {
  string s;
  cin >> s;

  stack<char> st;

  for(int i = 0; i < s.size(); i++) {
    char bracket = s[i];

    if(!st.empty() && st.top() == '(' && bracket == ')') {
      st.pop();
      continue;
    }

    st.push(bracket);
  }

  if(st.empty()) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  

  return 0;
}