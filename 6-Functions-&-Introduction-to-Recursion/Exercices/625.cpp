#include <iostream>
using namespace std;

void takingTime ( int time) {

  int hour = time / 10000;
  int min = (time / 100 ) % 100;
  int sec = time % 100;
  cout << hour << " " << min << " " << sec << endl;
}

int main (){
  takingTime(30513);
  return 0;
}
