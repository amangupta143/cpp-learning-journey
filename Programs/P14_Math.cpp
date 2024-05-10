/* 
 C++ has many functions that allows you to perform mathematical tasks on numbers.
 The max(x,y) function can be used to find the highest value of x and y.
 And the min(x,y) function can be used to find the lowest value of x and y.
 Functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << min(5, 10) << "\n";
  cout << min(5, 10) << "\n";
  cout << sqrt(64) << "\n";
  cout << round(2.6) << "\n";
  cout << log(2) << "\n";
  return 0;
}
