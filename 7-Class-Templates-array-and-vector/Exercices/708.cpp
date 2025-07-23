#include <cstddef>
#include <iostream>
#include <array>

using namespace std;
void questionD();

int main() {
  array<char, 26> alphabet = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g',
    'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u',
    'v', 'w', 'x', 'y', 'z'
  };

  cout << "a)\n";
  cout << alphabet[6] << "\n";

  cout << "b)\n";
  array<double, 10> grades = {};
  grades[4] = 30.0;
  cout << grades[4] << "\n";

  cout << "c)\n";
  for (size_t i = 0; i < grades.size(); ++i) {
    grades[i] = 8;
  }

  for (double grade : grades) {
    cout << grade << " ";
  }
  questionD();

  cout << endl;
  return 0;
}

void questionD() {
  array < double, 100> temperatures = {};
  cout << "question D)" << endl;

  for (size_t i = 0; i < temperatures.size(); ++i){
    temperatures[i] = i;
    cout << temperatures[i]<< " ";
  }
}
