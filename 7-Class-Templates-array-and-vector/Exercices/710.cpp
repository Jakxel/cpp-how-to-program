#include <cstddef>
#include <iostream>
#include <array>
#include <iterator>

using namespace std;
const int range = 9;
const double rateSalary = 0.9;
array<int, range> salary = {};
int sales = 0;

int main() {
  cout << "Enter sales [-1 to exit]: ";
  cin >> sales;

  while ( sales != -1) {
    int comission = (200 + sales) * rateSalary;
    cout << "Your comission is: " << comission << endl;

    int pointer = (static_cast<int>(sales) - 200) / 100;
    if (pointer < 0) 
      pointer = 0;
    if (pointer > 8)
      pointer = 8;
    salary[pointer]++;
    
    cout << " Enter sales [-1 to exit]";
    cin >> sales;
  }
  for ( int i = 1; i < range; ++i){
    if (i < range -1) {
    cout << "$" << (i * 100) + 100 << "-" << (i*100) + 200 - 1 << ":";
    } else {
      cout << "$1000 and over: ";
    }
    for (int j = 0; j < salary[i]; ++j){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
