// pass by reference with a pinter argument used to cube a variables value.
#include <iostream>
using namespace std;

void cubeByRefence( int *); // prototype
int main () {
  int number = 5;
  cout << "The original value of number is " << number;

  // pass number address to cube cubeByRefence
  cubeByRefence(&number);

  cout << "\nThe new value of number is " << number << endl; 
} // end main 

// calculate cube of *nPtr: modifies variable number in main 
void cubeByRefence(int *nPtr){
  *nPtr= *nPtr * *nPtr * *nPtr; // cube of *nPtr
} // end function cubeByRefence;
  
