// Finding the two largest number;

#include <iostream>
using namespace std;

int main(){
    int counter = 1;
    int number = 0;
    int secondLargest = 0;
    int firstLargest = 0;

    while (counter <= 10){
         cout << counter << ". Enter a number: ";
    cin >> number;

    if (number > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = number;
        } else if (number > secondLargest && number < firstLargest) {
            secondLargest = number;
        }
     counter ++;
    }

    cout << "The largest is: " << firstLargest << endl;
    cout << "The second largest is: " << secondLargest << endl;
    return 0;

}