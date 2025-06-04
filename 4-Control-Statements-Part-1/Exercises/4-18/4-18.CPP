// TABULAR OUTPUT

#include <iostream>
using namespace std;

int main (){
    int counter = 1;

    cout << "N   10*N   100*N   1000*N" << endl;

    while (counter <= 5)
    {
        cout << counter <<"    "<< counter*10 <<"     "<< counter*100 <<"     "<< counter*1000 << endl;
        counter ++;
    }
    
    return 0;
}