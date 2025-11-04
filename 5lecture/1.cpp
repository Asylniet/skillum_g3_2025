#include <iostream>
#include <string>
#include <cmath>
#include <map>

using namespace std;

int convertToInt(string s) {
  map<string, int> nums = {
    {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4}, {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}, {"ZER", 0}, 
  };

  int num = 0;
  int numOfDigits = s.size() / 3;
  for(int i = 0; i < numOfDigits; i++) {
    string numRepresentation = s.substr(3 * i, 3);
    int digit = nums[numRepresentation];

    num += digit * pow(10, numOfDigits - 1 - i);
  }

  return num;
}

int main() {
  string s = "FOU*ONETWOTHR";

  char operators[4] = {'+', '-', '/', '*'};

  int operatorIndex = -1;

  for(int i = 0; i < 4; i++) {
    if(s.find(operators[i]) != string::npos) {
      operatorIndex = s.find(operators[i]);
      break;
    }
  }

  string firstNum = s.substr(0, operatorIndex);
  string secondNum = s.substr(operatorIndex + 1);

  // ONE TWO THR
  // 012 345 678
  
  // 7 5 6 9 = 7569
  // SEVFIVSIXNIN
  // 7 * 1000 + 5 * 100 + 6 * 10 + 9 * 1
  // i = 0, pow = 3
  // i = 1, pow = 2
  // i = 2, pow = 1
  // i = 3, pow = 0

  // pow = (numOfDigits - 1) - i

  int sum = 0;
  if(s[operatorIndex] == '+') {
    sum = convertToInt(firstNum) + convertToInt(secondNum);
  } else if(s[operatorIndex] == '-') {
    sum = convertToInt(firstNum) - convertToInt(secondNum);
  } else if(s[operatorIndex] == '/') {
    sum = convertToInt(firstNum) / convertToInt(secondNum);
  } else if(s[operatorIndex] == '*') {
    sum = convertToInt(firstNum) * convertToInt(secondNum);
  }


  map<int, string> strings = {
    {1, "ONE"}, {2, "TWO"}, {3, "THR"}, {4, "FOU"}, {5, "FIV"}, {6, "SIX"}, {7, "SEV"}, {8, "EIG"}, {9, "NIN"}, {0, "ZER"}, 
  };

  string result = "";
  while(sum > 0) {
    int digit = sum % 10;
    sum /= 10;
    result = strings[digit] + result;
  }

  cout << result;

  // 4 5 8 0 1 - FOUFIVEIGZERONE

  // 45801 % 10 = 1
  // 45801 / 10 = 4580

  // 4580 % 10 = 0
  // 4580 / 10 = 458

  // 458 % 10 = 8
  // 458 / 10 = 45

  // 45 % 10 = 5
  // 45 / 10 = 4

  // 4 % 10 = 4
  // 4 / 10 = 0
  
  return 0;
}