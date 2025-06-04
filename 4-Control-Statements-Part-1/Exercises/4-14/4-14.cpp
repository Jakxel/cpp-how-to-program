#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numAccount = 0;
    double balance = 0.0;
    double charges = 0.0;
    double credit = 0.0;
    double creditLimit = 0.0;

    cout << fixed << setprecision(2); // Formatear a 2 decimales

    cout << "Enter account number (or -1 to quit): ";
    cin >> numAccount;

    while (numAccount != -1) {
        cout << "Enter beginning balance: ";
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charges;
        cout << "Enter total credits: ";
        cin >> credit;
        cout << "Enter credit limit: ";
        cin >> creditLimit;

        double newBalance = balance + charges - credit;

        cout << "New balance is: $" << newBalance << endl;

        if (newBalance > creditLimit) {
            cout << "Account:       " << numAccount << endl;
            cout << "Credit limit:  $" << creditLimit << endl;
            cout << "Balance:       $" << newBalance << endl;
            cout << "Credit limit exceeded." << endl;
        }

        cout << "\nEnter account number (or -1 to quit): ";
        cin >> numAccount;
    }

    return 0;
}