#include <cmath>
#include <iostream>
using namespace std;

double integerPower ( double base, double exponent) {
  return pow(base, exponent);

}
int main() {
  cout << integerPower(3,4);
  return 0;
}
