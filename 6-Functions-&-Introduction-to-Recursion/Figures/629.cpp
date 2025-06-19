#include <iostream>
using namespace std;

unsigned long fibonacci ( unsigned long );

unsigned long fibonacci ( unsigned long num )
{
  if (( num == 0) || (num == 1))
    return num;
  else {
    return fibonacci(num-1) + fibonacci(num-2);
  }
}
int main()
{
  for ( unsigned int i = 0; i <= 10; ++i) {
    cout << fibonacci(i) << endl;  
  }
}

