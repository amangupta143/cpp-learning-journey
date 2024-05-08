/* 
 Variables are containers for storing data values.

 In C++, there are different types of variables (defined with different keywords), for example:

 int - stores integers (whole numbers), without decimals, such as 123 or -123
 double - stores floating point numbers, with decimals, such as 19.99 or -19.99
 char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
 string - stores text, such as "Hello World". String values are surrounded by double quotes
 bool - stores values with two states: true or false

 Syntax: type variableName = value;
*/

#include <iostream>
using namespace std;

int main() {
  int myNum = 5;               // Integer (whole number without decimals)
  double myFloatNum = 5.99;    // Floating point number (with decimals)
  char myLetter = 'D';         // Character
  string myText = "Hello";     // String (text)
  bool myBoolean = true;       // Boolean (true or false)

  cout << myNum << "\n";

  // Multiple Variables
  int x, y, z;
  x = y = z = 50;
  cout << "The sum of x, y and z is " << x + y + z << ".";
  return 0;
}