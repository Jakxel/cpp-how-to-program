#include <cmath>
#include <iostream>
using namespace std;

int roundToInteger(double n) {
  return floor(n + 0.5);
}

double roundToTenths(double n) {
  return floor(n * 10 + 0.5) / 10;
}
double roundToThousandths(double n) {
  return floor(n * 1000 + 0.5) / 1000;
}

double roundToHundredths(double n) {
  return floor(n * 100 + 0.5) / 100;
}

int main () {
  double number = 0;
  cout << "Enter a number to round: " << endl;
  cin >> number;

  cout << roundToInteger(number) << endl;
  cout << roundToTenths(number) << endl;
  cout << roundToHundredths(number) << endl;
  cout << roundToThousandths(number) << endl;

  return 0;
}
