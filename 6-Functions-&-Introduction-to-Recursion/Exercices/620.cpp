#include <iostream>
using namespace std;

bool multiple(int n1, int n2){
  return n1 % n2 == 0;
}
int main () {
  cout << multiple(6, 2);
  return 0;
}
