// Preincrementing and postincrementing.
#include <iostream>
using namespace std;

int main()
{
  // demostrade postincrement
  int c = 5; // assing to 5 to c
  cout << c << endl; // print 5
  cout << c++ << endl; // print 5 then postincrement
  cout << c << endl; // print 6

  cout << endl; // skip a line

  // demonstrate preincrement
  c = 5; // assing 5 to c
  cout << c << endl; // print 5
  cout << ++c << endl; // preincremnent then print 6 
  cout << c << endl; // print 6
} // end main 