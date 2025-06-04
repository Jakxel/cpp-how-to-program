 #include <iostream>
 #include <iomanip>
 using namespace std;

int main() {
    double sales = 0.0;
    double salary = 0.0;
    
    cout << fixed << setprecision(2);
    cout << "Enter sales in dollar ( -1 to end): ";
    cin >> sales;

    while (sales != -1) {
        salary = (sales * 0.09) +200 ;
        cout << "Salary is: $" << salary << endl;
        cout << "Enter sales in dollar ( -1 to end): ";
        cin >> sales;
    }
    return 0;
}