#include <iostream>
#include <string>
using namespace std;

class Exercices {
    public:
    void exercise25 (){
        //Build a input size square;
        int size = 0;
        int collumn = 0;
        int row = 0;
    
        cout << "Input the size of the square: ";
        cin >> size;
        
        while (collumn < size)
        {
            while (row < size)
            {
                if (collumn == 0 || collumn == (size -1 )) {
                    cout << "*";
                }
                else 
                {
                    if (row == 0 || row == (size -1 )) {
                    cout << "*";
                    }
                    else 
                    {
                        cout << " ";                    
                    }
                }
                
                ++row;
            }
            row = 0;
            ++collumn;
            cout << endl;
        }
    };
    /*
        void exercise25cleaned (){
            //Build a input size square;
            int size = 0;
            int collumn = 0;
            int row = 0;
        
            cout << "Input the size of the square: ";
            cin >> size;
            
            while (collumn < size)
            {
                while (row < size)
                {
                    if (collumn == 0 || collumn == (size -1 )) {
                        cout << "*";
                    }
                    else 
                    {
                        if (row == 0 || row == (size -1 )) {
                        cout << "*";
                        }
                        else 
                        {
                            cout << " ";                    
                        }
                    }
                    
                    ++row;
                }
                row = 0;
                ++collumn;
                cout << endl;
            }
        };
        */
       void exercise26() {
        // Palindrome checker for 5-digit numbers
        int num;
        cout << "Enter a 5-digit number: ";
        cin >> num;

        // Validate input is 5 digits
        if (num < 10000 || num > 99999) {
            cout << "Invalid input. Please enter a 5-digit number." << endl;
            return;
        }

        string original = to_string(num);
        string reversed = "";

        // Build reversed string
        for (int i = original.length() - 1; i >= 0; --i) {
            reversed += original[i];
        }

        // Output and check
        cout << "Original: " << original << endl;
        cout << "Reversed: " << reversed << endl;

        if (original == reversed) {
            cout << "Your number is a palindrome." << endl;
        } else {
            cout << "Your number is not a palindrome." << endl;
        }
    }
};

int main(){
    Exercices ex;
    ex.exercise26();
    return 0;
}