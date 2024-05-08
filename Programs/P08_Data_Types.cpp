/* 
 The data type specifies the size and type of information the variable will store:

 boolean	1 byte	        Stores true or false values
 char	    1 byte	        Stores a single character/letter/number, or ASCII values
 int	    2 or 4 bytes	Stores whole numbers, without decimals
 float	    4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
 double	    8 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
*/

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'D';         // Character
  bool myBoolean = true;       // Boolean
  string myString = "Hello";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}
