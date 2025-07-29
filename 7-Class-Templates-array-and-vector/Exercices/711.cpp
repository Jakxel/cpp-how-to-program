// One dimensional array question: Write siongle statements that perform the following one-dimensional array operation:
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <array>
using namespace std;

int main() {
  // a) intialize the 10 elements of intger array count to zero:
  array< int , 10> counts = {};
  // b) add 1 to each of the 15 elements of integr array bonus
  array < int , 15> bonus = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
  // c) read 12 values for the array od doubles named monthyTemperatures from teh keyboard
  array < double, 12> monthlyTemperatures;
  copy_n(istream_iterator<double>(cin),12, monthlyTemperatures.begin());
  // d) print the 5 values of integer array bestScores in column format:
  array < int , 5> bestScores = {1,2,3,56,7};
  for ( auto i : bestScores) cout <<"best score:" <<i << "\n";

  return 0;
}
