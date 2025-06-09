// Odd integers
#include <iostream>
using namespace std;

int main () {
    int result = 1;
    for (unsigned int i = 1; i <= 15; ++i)
    if (i % 2) {
        cout << "Adding: " << i << endl;
        result *= i;
    }
    cout << "The result in the multiplied of odd integers is: " << result << endl;
    return 0;
}