#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int> &array); // display the vector
void inputVector(vector<int> &array);        // input values into the vector

int main() {
  vector<int> integers1(7);  // 7-element vector<int>
  vector<int> integers2(10); // 10-element vector<int>

  // Print size and contents of integers1
  cout << "Size of vector integers1 is " << integers1.size()
       << "\nVector after initialization:" << endl;
  outputVector(integers1);

  // Print size and contents of integers2
  cout << "\nSize of vector integers2 is: " << integers2.size()
       << "\nVector after initialization:" << endl;
  outputVector(integers2);

  // Input and print vectors
  cout << "\nEnter 17 integers: " << endl;
  inputVector(integers1);
  inputVector(integers2);

  cout << "\nAfter input, the vectors contain:\n"
       << "integers1: " << endl;
  outputVector(integers1);
  cout << "integers2:" << endl;
  outputVector(integers2);

  // Use inequality (!=) operator
  cout << "\nEvaluating: integers1 != integers2" << endl;
  if (integers1 != integers2)
    cout << "integers1 and integers2 are not equal" << endl;

  // Create vector integers3 using copy constructor
  vector<int> integers3(integers1);

  cout << "\nSize of vector integers3 is " << integers3.size()
       << "\nVector after initialization:" << endl;
  outputVector(integers3);

  // Assignment operator
  cout << "\nAssigning integers2 to integers1:" << endl;
  integers1 = integers2;

  cout << "integers1:" << endl;
  outputVector(integers1);
  cout << "integers2:" << endl;
  outputVector(integers2);

  // Equality (==) operator
  cout << "\nEvaluating: integers1 == integers2" << endl;
  if (integers1 == integers2)
    cout << "integers1 and integers2 are equal" << endl;

  // rvalue and lvalue
  cout << "\nintegers1[5] is " << integers1[5];
  cout << "\n\nAssigning 1000 to integers1[5]" << endl;
  integers1[5] = 1000;
  cout << "integers1:" << endl;
  outputVector(integers1);

  // Out-of-range access
  try {
    cout << "\nAttempt to display integers1.at(15)" << endl;
    cout << integers1.at(15) << endl; // will throw
  } catch (out_of_range &ex) {
    cerr << "An exception occurred: " << ex.what() << endl;
  }

  // Change vector size with push_back
  cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
  integers3.push_back(1000);
  cout << "New integers3 size is: " << integers3.size() << endl;
  cout << "integers3 now contains: ";
  outputVector(integers3);

  return 0;
}

// Output vector contents
void outputVector(const vector<int> &array) {
  for (int item : array)
    cout << item << " ";
  cout << endl;
}

// Input vector contents
void inputVector(vector<int> &array) {
  for (int &item : array)
    cin >> item;
}
