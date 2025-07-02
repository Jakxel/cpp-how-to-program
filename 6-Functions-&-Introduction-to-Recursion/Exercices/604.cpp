// Give the function header for each of the following functions:
// function hipotenuse
// function smallest
// functions instructions
// function intoDouble

#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse (double side1, double side2) {
  return hypot(side1, side2);
}

int smallest (int x, int y, int z)
{
  int i = x;
    if (i > y)
      i = y;
    if ( i > z)
      i = y;
  return i;
}  
void instructions() {
  cout << "This are the instructions: \nThere's no intructions :)"<< endl;
}

double intoDouble (int a){
  return a;
}

int main () {
  cout << smallest(5,10, 12) << endl;
  cout << hypotenuse(2,2) << endl;
  instructions();
  cout << intoDouble(5) << endl;

  return 0;
}
