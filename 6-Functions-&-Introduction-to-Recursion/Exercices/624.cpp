#include <iostream>
using namespace std;

int quotient(int a, int b) {
  return a / b;
}

int remainder(int a, int b) {
  return a % b;
}

void separingDigits(int num) {
  int divisor = 10000;
  bool leadingZero = true;

  while (divisor >= 1) {
    int digit = quotient(num, divisor);

    if (digit != 0 || !leadingZero || divisor == 1) {
      cout << digit << "  ";
      leadingZero = false;
    }

    num = remainder(num, divisor);
    divisor /= 10;
  }

  cout << endl;
}

int main () {
  separingDigits(3120);    
  separingDigits(4562);   
  separingDigits(7);
  return 0;
}
