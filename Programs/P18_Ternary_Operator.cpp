/* 
 There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
 It can be used to replace multiple lines of code with a single line. 
 It is often used to replace simple if else statements.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
  return 0;
}