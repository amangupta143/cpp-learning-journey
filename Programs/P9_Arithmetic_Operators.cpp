/* 
 Operators are used to perform operations on variables and values.
 Arithmetic operators are used to perform common mathematical operations.
*/

#include <iostream>
using namespace std;

int main() {
  int x = 4;
  int y = 3;
  int sum = x + y;
  cout << sum << "\n";
  int diff = x - y;
  cout << diff << "\n";
  int product = x * y;
  cout << product << "\n";
  int quotient = x / y;
  cout << quotient << "\n";
  int remainder = x % y;
  cout << remainder << "\n";
  return 0;
}