#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand1to6(){
  return 1 + (rand() % 6);
}

int rand1to100(){
  return 1 + (rand() % 100);
}

int rand0to9(){
  return rand() % 10;
}

int rand1000to1112(){
  return 1000 + (rand() % (1112 - 1000 + 1));
}

int randMinus1to1(){
  return -1 + (rand() % 3); 
}

int randMinus3to11(){
  return -3 + (rand() % (11 - (-3) + 1)); 
}

int main () {
  srand(time(0)); 

  cout << "rand1to6: " << rand1to6() << endl;  
  cout << "rand1to100: " << rand1to100() << endl;
  cout << "rand0to9: " << rand0to9() << endl;
  cout << "rand1000to1112: " << rand1000to1112() << endl;
  cout << "rand-1to1: " << randMinus1to1() << endl;
  cout << "rand-3to11: " << randMinus3to11() << endl;

  return 0;
}
