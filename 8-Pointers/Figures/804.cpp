#include <iostream>
using namespace std;

int main () {
  int a = 7; // assigned 7 to  a 
  int *aPtr = &a; // Initialize aPtr with the address of int variuable a//

  cout << "The addres of a is " << &a
    << "\nThe value of aPtr is " << aPtr;
  cout << "\nThe value of a is " << a
    << "\nThe value of *aPtr is " << *aPtr << endl;
} // end main 

