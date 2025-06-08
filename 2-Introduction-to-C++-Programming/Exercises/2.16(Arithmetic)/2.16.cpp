// Program taht ask the user to enter two number and prints the sum, profuct, difference, and quotient of the two numbers 

#include <iostream>
using namespace std;

int main () {
  int number1 = 0;
  int number2 = 0;

  cout << "Enter two numbers\n" << endl;
  cin >> number1 >> number2; 

  cout << " the results are:\n";
  cout << " the sum: " << number1 + number2 << "\n";
  cout << " the difference: " << number1 - number2 << "\n";
  cout << " the product: " << number1 * number2 << "\n";
  cout << " the quotien: " << number1 / number2 << "\n";

} 