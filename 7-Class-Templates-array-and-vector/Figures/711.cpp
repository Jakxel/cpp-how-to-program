#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main() {
  const size_t responseSize = 20;
  const size_t frequencySize = 6;

  const array< unsigned int, responseSize> responses = {
    1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5};

  array< unsigned int, frequencySize> frequency = {};

  for( size_t answer = 1; answer < responses.size(); ++answer){
    ++frequency[responses[answer]];
    // ++Frequency [response [1]]
    // ++frequecny[1]
    // ++1
    // another interation
    // ++frequency [ respone [2]]
    // ++frequency [2]
    // ++2
  }

  cout << "Rating" << setw(17) << "frequency" << endl;
  
  for (size_t rating = 1; rating < frequency.size(); ++rating) {
    cout << setw(6) << rating << setw(17) << frequency[rating] << endl;
  }
}
