/* 
 A Boolean expression returns a boolean value that is either 1 (true) or 0 (false).

 This is useful to build logic, and find answers.
 You can use a comparison operator, such as the greater than (>) operator, to find out if an expression (or variable) is true or false.
*/

#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int y = 9;
  cout << (x < y) << "\n";
  cout << (x == 10) << "\n";

  // Real life example
  int myAge = 25;
  int votingAge = 18;
  
  cout << (myAge >= votingAge);  // returns 1 (true), meaning 25 year olds are allowed to vote!
  return 0;
}