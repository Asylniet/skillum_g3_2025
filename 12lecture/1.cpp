#include <iostream>

using namespace std;

// 24 + 425
// 24 425 +

// (2 * 6) + (5 / 9) + 0
// 2 6 * 5 9 / + 0 +

string convert_to_postfix(string s) {
  string firstPart, operation, secondPart;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ') continue;

    if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*') {
      if(firstPart.find('(') != string::npos) {
        int bracketIndex = firstPart.find('(');
        int closingBracketIndex = firstPart.find(')', bracketIndex);
        string scope = firstPart.substr(bracketIndex + 1, closingBracketIndex - bracketIndex);
        firstPart = convert_to_postfix(scope);
      }

      if(secondPart.find('(') != string::npos) {
        int bracketIndex = secondPart.find('(');
        int closingBracketIndex = secondPart.find(')', bracketIndex);
        string scope = secondPart.substr(bracketIndex + 1, closingBracketIndex - bracketIndex);
        secondPart = convert_to_postfix(scope);
      }

      if(operation != "") {
        firstPart += " " + secondPart + " " + operation;
        secondPart = "";

      }

      operation = s[i];
      continue;
    }

    if(s[i] == '(') {
      int closingBracketIndex = s.find(')', i);
      string scope = s.substr(i, closingBracketIndex - i + 1);

      if(operation == "") {
        firstPart = scope;
      } else {
        secondPart = scope;
      }

      i = closingBracketIndex;
      continue;
    }

    if(operation == "") {
      firstPart += s[i];
    } else {
      secondPart += s[i];
    }
  }

  string result = firstPart + " " + secondPart + " " + operation;

  return result;
}

int main() {
  string s;
  getline(cin, s);

  cout << convert_to_postfix(s);

  // 24 + 425 - 2
  // 24 425 + 2 -
  // A + B = A B +

  // 24 + (425 - 2)
  // 24 425 2 - +
  // A + B = A B +

  return 0;
}