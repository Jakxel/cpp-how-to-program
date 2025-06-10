// Factorial numbers
#include <iostream>
using namespace std;
unsigned long long Factorial(int input) {
    long long factorial = 1;
    for (unsigned int i = 1; i <= input; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    cout << Factorial(20);
    return 0;
}