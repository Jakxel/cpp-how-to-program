#include <iostream>
using namespace std;

int summingIntegers(int count) {
    int value, sum = 0;

    for (int i = 0; i < count; ++i) {
        cout << "Insert a number: ";
        cin >> value;
        sum += value;
    }

    return sum;
}

int main() {
    int total = summingIntegers(5);
    cout << "The total sum is: " << total << endl;
    return 0;
}