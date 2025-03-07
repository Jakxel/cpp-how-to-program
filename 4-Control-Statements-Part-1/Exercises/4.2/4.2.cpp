// Write four different C++ statements that each add 1 to integer variable x.
#include <iostream>
using namespace std;

int main () {
  int x = 0;

  cout << x + 1 << endl;
  cout << (x += 1) << endl;
  cout << ++x << endl;
  cout << x++ << endl;

  cout << "cout << x + 1 << endl; \ncout << (x += 1) << endl;\n cout << ++x << endl;\n cout << x++ << endl;" << endl;
}