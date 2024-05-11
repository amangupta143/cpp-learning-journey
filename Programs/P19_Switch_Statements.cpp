/*
 Use the switch statement to select one of many code blocks to be executed.

 This is how it works:
 The switch expression is evaluated once
 The value of the expression is compared with the values of each case
 If there is a match, the associated block of code is executed
*/

#include <iostream>
using namespace std;

int main() {
  int day = 4;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
  return 0;
}
