// The smallest integer
#include <iostream>
using namespace std;

int smallestInteger(int num) {
    int input, smallest;

    cout << "Enter number 1 of " << num << ": ";
    cin >> input;
    smallest = input;

    for (int i = 1; i < num; ++i) {
        cout << "Enter number " << (i + 1) << " of " << num << ": ";
        cin >> input;

        if (input < smallest) {
            smallest = input;
        }
    }

    return smallest;
}

int main() {
    cout << smallestInteger(5) << endl;
    return 0;
}