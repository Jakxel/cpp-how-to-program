#include <iostream>
using namespace std;

unsigned long factorial ( unsigned long num ) {
  if (num <= 1 )
    return num;
  else 
    return num * factorial(num - 1);
 }

int main () {
  cout << factorial(4) << endl;
}
