#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;
const int tableRange = 8;
void printTable (array<array<int,tableRange>,tableRange> &a);

void errorMessage() {
  cout << "Movement not available\n\n";
}

int main() {
  array<array<int,tableRange>,tableRange> chessTable = {};
  int currentRow = 0;
  int currentColumn = 0;
  char move;

  chessTable[currentRow][currentColumn] = 1;
  system("clear");
  do {
  printTable(chessTable);
  cout << "Make a move \"AWSD\" [q to quit]";
  cin >> move;
  system("clear");

    switch (move) {
      case 'a':
        if (currentColumn >= 1)
          --currentColumn;
        else 
          errorMessage();
        break;
      case 'w': 
        if (currentRow >= 1)
          --currentRow;
        else {
          errorMessage();
        }
        break;
      case 's':
        if(currentRow <= 6)
          ++currentRow;
        else {
          errorMessage();
        }
        break;
      case 'd':
        if (currentColumn <= 6)
          ++currentColumn;
        else
         errorMessage();
        break;  
    }
    chessTable = {};
    chessTable[currentRow][currentColumn] = 1;
  }while ( move != 'q');
  
}

void printTable(array<array<int,tableRange>,tableRange> &a) {
  for (auto rows: a){
    for (auto columns: rows)
      if ( columns == 1)
        cout << "1 ";
      else 
        cout << ". ";
    cout << endl;
  }
}

