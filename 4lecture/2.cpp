#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  string s = "ONETWOTHR+FOUFIVSIXSEVEIG";

  int plusIndex = s.find('+');
  string firstNum = s.substr(0, plusIndex);
  string secondNum = s.substr(plusIndex + 1);

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

  int num = 0;
  int numOfDigits = secondNum.size() / 3;
  for(int i = 0; i < numOfDigits; i++) {
    string numRepresentation = secondNum.substr(3 * i, 3);
    int digit;
    if(numRepresentation == "ONE") {
      digit = 1;
    } else if (numRepresentation == "TWO") {
      digit = 2;
    } else if(numRepresentation == "THR") {
      digit = 3;
    } else if(numRepresentation == "FOU") {
      digit = 4;
    } else if(numRepresentation == "FIV") {
      digit = 5;
    } else if(numRepresentation == "SIX") {
      digit = 6;
    } else if(numRepresentation == "SEV") {
      digit = 7;
    } else if(numRepresentation == "EIG") {
      digit = 8;
    } else if(numRepresentation == "NIN") {
      digit = 9;
    } else if(numRepresentation == "ZER") {
      digit = 0;
    }

    num += digit * pow(10, numOfDigits - 1 - i);
  }

  cout << num << " " << num * 2;
  
  return 0;
}