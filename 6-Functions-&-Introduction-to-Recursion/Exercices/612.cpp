#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calculateCharges(double h) {
  if (h <= 3) return 2.0;
  if (h > 20) return 10.0;
  return 2.0 + (h - 3) * 0.5;
}

void printRow(string label, double hours, double charge) {
  cout << left << setw(6) << label
       << right << setw(10) << hours
       << setw(12) << charge << endl;
}

int main() {
  double c1, c2, c3;
  cin >> c1 >> c2 >> c3;

  double ch1 = calculateCharges(c1);
  double ch2 = calculateCharges(c2);
  double ch3 = calculateCharges(c3);
  double totalH = c1 + c2 + c3;
  double totalC = ch1 + ch2 + ch3;

  cout << fixed << setprecision(2);
  cout << left << setw(6) << "Car"
       << right << setw(10) << "Hours"
       << setw(12) << "Charge" << endl;

  printRow("1", c1, ch1);
  printRow("2", c2, ch2);
  printRow("3", c3, ch3);
  printRow("TOTAL", totalH, totalC);

  return 0;
}
