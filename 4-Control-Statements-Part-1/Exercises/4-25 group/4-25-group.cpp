#include <iostream>
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
};

int main(){
    Exercices ex;
    ex.exercise25();
    return 0;
}