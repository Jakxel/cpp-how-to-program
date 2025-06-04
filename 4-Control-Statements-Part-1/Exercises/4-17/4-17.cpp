// Find de largest number in a group of 10 numbers

#include <iostream>
using namespace std;

int main (){
    int counter = 0;
    int number = 0;
    int largest = 0;

    while (counter <= 11 ){
        cout << "Enter a number: ";
        cin >> number; 
        if (largest <= number){
            largest = number;
        }
        counter ++;
    }
    cout << "The largest number is: " << largest << endl;

}