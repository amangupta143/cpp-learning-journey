/* 
 Strings are used for storing text.
 A string variable contains a collection of characters surrounded by double quotes.
 To use strings, we must include an additional header file in the source code, the <string> library.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello ";
  cout << greeting << endl;

  // String Concatenation
  string firstName = "Aman";
  string lastName = "Gupta";
  string fullName = firstName + " " + lastName;
  cout << fullName << endl;

  // String Length
  cout << "The length of the txt string is: " << fullName.length() << endl;

  // Access Strings
  cout << fullName[1] << endl;

 /* 
   Special Characters
   \'	 '	  Single quote
   \"	 "	  Double quote
   \\	 \	  Backslash
 */
  string intro = "My name is \"Aman Gupta\".";
  cout << intro << endl;

  return 0;
}