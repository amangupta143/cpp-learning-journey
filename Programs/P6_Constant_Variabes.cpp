/* 
 When you do not want others (or yourself) to change existing variable values, use the const keyword.
 This will declare the variable as "constant", which means unchangeable and read-only.
*/

#include <iostream>
using namespace std;

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14; // PI will always be 3.14
  // PI = 5;  error: assignment of read-only variable 'PI'
  cout << minutesPerHour << "\n";
  cout << PI;
  return 0;
}