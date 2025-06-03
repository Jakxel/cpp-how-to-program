 #include <iostream>
 using namespace std;

int main() {

    return 0;
    double sales = 0;
    double salary = 0;
    
    cout << "Enter sales iin dollar ( -1 to end)";
    cin >> sales;

    while (sales != -1) {
        salary = (sales * 0.09) +200;
        cout << "Salary is: $" << salary << endl;
        cout << "Enter sales iin dollar ( -1 to end)";
    }

    return 0;
}