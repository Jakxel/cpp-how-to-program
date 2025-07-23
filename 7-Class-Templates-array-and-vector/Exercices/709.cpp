#include <cstddef>
#include <iostream>
#include <array>
using namespace std;

const size_t rows = 2;
const size_t columns = 3;

void printArray(array<array<int, columns>, rows>& a);

int main() {
  array<array<int, columns>, rows> t = {{{2, 3, 1}, {2, 4, 3}}};

  for (const auto& row : t) {
    for (const auto& element : row) {
      cout << element << " ";
    }
    cout << endl;
  }

  for (size_t i = 0; i < columns; ++i) {
    cout << t[0][i] << " ";
  }
  cout << endl;

  for (const auto& element : t[1]) {
    cout << element << " ";
  }
  cout << endl;

  for (auto& row : t) {
    for (auto& element : row) {
      element = 3;
    }
  }

  printArray(t);

  t[0].fill(0);
  t[1].fill(0);


  printArray(t);

  return 0;
}

void printArray(array<array<int, columns>, rows>& a) {
  for (const auto& row : a) {
    for (const auto& element : row) {
      cout << element << " ";
    }
    cout << endl;
  }
}

