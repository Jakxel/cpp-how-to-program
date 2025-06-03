// (Credit limits)
#include <iostream>
using namespace std;

int main() {
    int numAccount = 0;
    int balance = 0;
    int charges = 0;
    int credit = 0;
    int creditLimit = 0;

    cout << "Enter account nnumber (or -1 to quit):" << endl;
    cin >> numAccount;

    while ( numAccount != -1) {
        cout << "Enter beginning balance: " << endl;
        cin >> balance;
         cout << "Enter total charges: " << endl;
        cin >> charges;
         cout << "Enter total credits: " << endl;
        cin >> credit;
         cout << "Enter credit limit: " << endl;
        cin >> creditLimit;

         cout << "Enter account nnumber (or -1 to quit):" << endl;
         cin >> numAccount;
    }
}