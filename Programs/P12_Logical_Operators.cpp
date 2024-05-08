/* 
 Logical operators are used to determine the logic between variables or values:

 Operator   Name	       Description
 && 	    Logical and	   Returns true if both statements are true
 || 	    Logical or	   Returns true if one of the statements is true
 !	        Logical not    Reverse the result, returns false if the result is true
*/

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x > 3 && x < 10); // returns true (1) because 5 is greater than 3 AND 5 is less than 10
  return 0;
}