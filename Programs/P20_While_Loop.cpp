/*
 Loops can execute a block of code as long as a specified condition is reached.
 Loops are handy because they save time, reduce errors, and they make code more readable.

 The while loop loops through a block of code as long as a specified condition is true
*/

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
  }
  return 0;
}