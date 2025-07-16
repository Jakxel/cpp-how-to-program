#include <cmath>
#include <iostream>
using namespace std;

double hypotenuse (double side1 , double side2) {
  return sqrt(pow(side1, 2) + pow(side2, 2));
}
int main (){
  cout << "triangule 1: " << hypotenuse(3.0, 4.0) << endl;   
  cout << "triangule 2: " << hypotenuse(5.0, 12.0) << endl; 
  cout << "triangule 3: " << hypotenuse(8.0, 15.0);
  return 0;
}
