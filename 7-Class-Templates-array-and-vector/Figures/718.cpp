#include <cstddef>
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  const size_t arrarSize = 7;
  array<string, arrarSize> colors = { "red", "orange", "yellow", "green", "blie", "indigo", "violet"};

  //output original array
  cout << "Unsorted array:\n";
  for (string color: colors ) 
    cout << color << " ";

  sort(colors.begin(), colors.end()); // sort contents of colors 

  //output sorted array 
  cout << "\nSorted array:\n";
  for ( string item : colors)
    cout << item << " ";

  // searcg for "Indigo" in colors
  bool found = binary_search( colors.begin(), colors.end(), "indigo");
  cout << "\n\n\"indigo\" " << (found ? "was" : "was not" ) << " found in colors" << endl;
  
  found = binary_search( colors.begin(), colors.end(), "cyan");
  cout << "\n\n\"cyan\" " << (found ? "was" : "was not" ) << " found in colors" << endl;
}
