#include <iostream>
using namespace std;

void isEven( int n) {
  (n % 2 == 0) ? cout << n << " is even" << endl : cout << n << " is not even "<< endl;
}


int main() {
  isEven(4);
  isEven(5);
  return 0;
}
