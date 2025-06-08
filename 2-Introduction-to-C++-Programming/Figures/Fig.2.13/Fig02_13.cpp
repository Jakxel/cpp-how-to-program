// Comparing integers using if statements, relational operators,
// and equiality operators.
#include <iostream>

using std::cout; // program uses cout;
using std::cin; // program uses cin
using std::endl; // progam uses endl

int main()
{
  int number1 = 0;
  int number2 = 0;

  cout << "Enter two integers to compare: ";
  cin >> number1 >> number2; // read two integers from user

  if (number1 == number2)
  cout << number1 << "==" << number2 << endl; 

  if (number1 != number2)
  cout << number1 << "!=" << number2 << endl; 

  if (number1 < number2)
  cout << number1 << "<" << number2 << endl; 

  if (number1 > number2)
  cout << number1 << ">" << number2 << endl; 

  if (number1 >= number2)
  cout << number1 << ">=" << number2 << endl; 

   if (number1 <= number2)
  cout << number1 << "<=" << number2 << endl; 
} // end function main