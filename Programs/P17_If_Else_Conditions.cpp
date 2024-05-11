/* 
 C++ has the following conditional statements:

 Use if to specify a block of code to be executed, if a specified condition is true.
 Use else to specify a block of code to be executed, if the same condition is false.
 Use else if to specify a new condition to test, if the first condition is false.
 Use switch to specify many alternative blocks of code to be executed.
*/

#include <iostream>
using namespace std;

int main() {
  int time = 22;
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  return 0;
}