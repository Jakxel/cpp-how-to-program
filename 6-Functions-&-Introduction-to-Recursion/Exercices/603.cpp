// Write a program that test whether the examples of the math library function calls shown in fig.6.2 actually produce the indicant results.
// The function in question is function o cube

#include <iostream>
#include<cmath>
using namespace std;

double cube( double num)
{
  return pow(num, 3);
}


int main () {
 cout << cube(2);
  return 0;
}
