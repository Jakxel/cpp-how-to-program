// duplicate elimination wqith array)
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
const int range = 20;

void printArray(array<int,range> & a) {
  cout << "Results of numbers in array\n";
  for (auto i = 0; i < range; ++i)  {
    if ( a[i] > 0)
    cout << "Item "<< i << ": "<< a[i] << "\n";
  }
}

void readNumbers (array<int,range>&a){

  for (auto i = 0; i < range; i++){
    int read = 0;
    cin >> read;
    int * n;
    n = find(a.begin(), a.end(), read);
      if (n != a.end()){
        cout << "Element duplicated !!\n";
      }else {
      if ( read <10 || read > 100){
      cout << "number is not available\n";
    } else {
      a[i] = read;
    }
      
     }}
      printArray(a);
}
int main () {
  array< int, range> numbers = {};
  readNumbers(numbers); 
  return 0;
}
