// 4.13 (Gas mileage)
#include <iostream>
using namespace std;

int main() {
    double milesDriven = 0;
    double gallonsUsed = 0;
    double totalMiles = 0;
    double totalGallons = 0;

    cout << "Enter miles driven (-1 to quit): ";
    cin >> milesDriven;

    while (milesDriven != -1) {
        cout << "Enter gallons used: ";
        cin >> gallonsUsed;

        double tripMPG = milesDriven / gallonsUsed;
        totalMiles += milesDriven;
        totalGallons += gallonsUsed;
        double totalMPG = totalMiles / totalGallons;

        cout << "MPG this trip: " << tripMPG << endl;
        cout << "Total MPG: " << totalMPG << endl;

        cout << "\nEnter miles driven (-1 to quit): ";
        cin >> milesDriven;
    }

    return 0;
}