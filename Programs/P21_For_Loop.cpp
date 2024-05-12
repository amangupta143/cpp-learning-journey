/*
 When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.

 Statement 1 is executed (one time) before the execution of the code block.
 Statement 2 defines the condition for executing the code block.
 Statement 3 is executed (every time) after the code block has been executed.
*/

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i <= 20; i = i + 2) {
    cout << i << "\n";
  }
  return 0;
}