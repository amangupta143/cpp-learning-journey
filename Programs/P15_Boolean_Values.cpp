/* 
 Very often, in programming, you will need a data type that can only have one of two values, like:
 YES / NO
 ON / OFF
 TRUE / FALSE
 For this, C++ has a bool data type, which can take the values true (1) or false (0).

 A boolean variable is declared with the bool keyword and can only take the values true or false.
*/

#include <iostream>
using namespace std;

int main() {
  bool isCodingFun = true;
  bool isFishTasty = false;
  cout << isCodingFun << "\n";
  cout << isFishTasty;
  return 0;
}

