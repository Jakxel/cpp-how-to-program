// duplicate elimination wqith vector)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<int>& a) {
    cout << "Results of numbers in array\n";
    for (size_t i = 0; i < a.size(); ++i) {
        cout << "Item " << i << ": " << a[i] << "\n";
    }
}

void readNumbers(vector<int>& a) {
    for (int i = 0; i < 20; ++i) {
        int read = 0;
        cin >> read;

        if (find(a.begin(), a.end(), read) != a.end()) {
            cout << "Element duplicated !!\n";
        } else if (read < 10 || read > 100) {
            cout << "number is not available\n";
        } else {
            a.push_back(read);
        }
    }

    printVector(a);
}

int main() {
    vector<int> numbers;
    readNumbers(numbers);
    return 0;
}
