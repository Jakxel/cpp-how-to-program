// Fig 6.8 fig08_08.cpp
// Shifted, scaled integers produced by 1 + rand() % 6 
#include <iostream> 
#include <iomanip>
#include <cstdlib> // contains fucntion prototype for rand
using namespace std;

int main(){
  //lop   20 times 
  for ( unsigned int counter = 1; counter <= 20; ++counter) {
    // pick random number from 1 to 6 and output it 
    cout << setw(10) << ( 1 + rand() % 6);

    // if counter is divisible by 5, start a new line of output
    if ( counter % 5 == 0 )
      cout << endl;
  } // end for
} // end main 
