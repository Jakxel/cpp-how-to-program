#include <iostream>
using namespace std;

int main() {
    int hours = 0;
    int hourRate = 0;
    double salary = 0;

    cout << "Enter hours worked (-1 to end): "; cin >> hours;

    while (hours != -1) {
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> hourRate;

        if (hours > 40) {
            salary = (hours * hourRate) + (((hours - 40 )* hourRate) / 2);
            cout << "Salary is : $" << salary << endl;
        } else {
            salary = (hours * hourRate); 
            cout << "Salary is : $" << salary << endl;
        }
        cout << "Enter hours worked (-1 to end): "; 
        cin >> hours;
    }
    return 0;
}