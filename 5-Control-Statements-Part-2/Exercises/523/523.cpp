// Diamond pattern 
#include <iostream>
using namespace std;
void diamondFigure(int size){

    int space = size - 1;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0 ; j <= space; ++j){
            cout << " ";
        }
        for (int e = 0; e <= i; ++e){
            
            cout << "* ";
        }
        cout << endl;
        --space;
    }

    space = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int e = space; e >= 0; --e){
            cout << " ";
        }
        for (int j = size - 1 ; j >= i + 1; --j){
            cout << " *";
        }
        cout << endl;
        ++space;
    } 
}
int main ()
{
    diamondFigure(9);
    return 0;
}