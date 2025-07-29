#include <cstddef>
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
int main (){
  array<array<int,5>,3>sales= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

  for (size_t row = 0; row < sales.size(); ++row){
    for (size_t column = 0 ; column < sales[row].size(); ++column){
      sales[row][column] = 0;
for ( auto rows :sales){
    for( auto columns : rows)
      cout << setw(3)<< columns;
    cout << endl;
    
  }cout << endl;
    }}
} 
