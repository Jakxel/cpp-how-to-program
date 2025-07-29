#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

void printMaze(array<array<int,12>,12> &a);

int main () {
  array<array<int ,12>,12> maze = {0,0,0,0,0,0,0,0,0,0,0,0,
                                    0,1,1,1,0,1,1,1,1,1,1,0,
                                    1,1,0,1,0,1,0,0,0,0,1,0,
                                    0,0,0,1,0,1,1,1,1,0,1,0,
                                    0,1,1,1,1,0,0,0,1,0,1,1,
                                    0,0,0,0,1,0,1,0,1,0,1,0,
                                    0,1,1,0,1,0,1,0,1,0,1,0,
                                    0,0,1,0,1,0,1,0,1,0,1,0,
                                    0,1,1,1,1,1,1,1,1,0,1,0,
                                    0,0,0,0,0,0,1,0,0,0,1,0,
                                    0,1,1,1,1,1,1,0,1,1,1,0,
                                    0,0,0,0,0,0,0,0,0,0,0,0};
  printMaze(maze);
  
  return 0;
}

void printMaze(array<array<int,12>,12> &a){
  for (auto rows:a){
    for (auto columns : rows)
      if (columns == 1){
        cout << ". ";
      } else 
        cout << "# ";
    cout << endl;
  }
}
