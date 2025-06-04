#include <iostream>
using namespace std;

int main() {
    int data = 0;
    cout << "Enter 1 for pass 2 for failed:";
    cin >> data;
    if (data != 1 && data != 2)
    {
       cout << "Invalid input!";
    } else  {
    cout << "Its fine the real thing is get fun";
        
    }
    return 0;
}