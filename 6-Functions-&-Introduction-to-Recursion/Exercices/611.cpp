#include <cmath>
#include <iostream>
#include <ostream>
using namespace std;

int main (){
  double x =0;

  x = fabs(7.5);
  cout << x << endl;
  x = floor(7.5);
  cout << x << endl;
  x = fabs(0.0);
  cout << x << endl;
  x = ceill(0.0);
  cout << x << endl;
  x = fabs(-6.4);
  cout << x << endl;
  x = ceil(-6.5);
  cout << x << endl;
  x = ceil(-fabs( -8 + floor(-5.5)));
  cout << x << endl;
  return 0;
}
