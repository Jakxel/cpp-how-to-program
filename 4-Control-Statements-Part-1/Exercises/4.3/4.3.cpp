// FIG 4.3
#include <iostream>
using namespace std;

int main (){
  int x = 0;
  int y = 0;
  int z = 0;
  int q = 0;
  int count = 0;
  int total = 0;
  int divisor = 0;

  // in one statement , assing the sum of the current value of x and y to z and postincrement
  // the value of x.
  z = x++ + y;

  // Determine whether the value of the variable count is greater than 10. if it is, print
  //"Count is greater than 10"
  if (count < 10 ) 
    cout << count << " is greater than 10" << endl;
  
  //Predecrement the variable x by 1, then substract it from the variable total.
  total -= --x;

  //Calculate the reminder after q is divided by the divisor and assing the result to q, Write
  //This statement two different ways.
  q %= divisor;
  q = q % divisor;
}
