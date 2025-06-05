#include <iostream>
using namespace std;

class Exercices{
public:
void exercise1(){
    unsigned int count = 0;

    while (count <= 10)
    {        
    cout << (count % 2 ? "*****" : "#####" ) << endl;
    count++; 
    }  
}

void exercise2() {
    unsigned row = 10;

    while (row >= 1) 
    {    
        unsigned column = 1;
        while (column <= 10)
        {
            cout << ( row % 2 ? "<" : ">");
            ++column;
        }
        --row;
        cout << endl;

    }
    
}
};
int main(){
    Exercices ex;
    ex.exercise2();
    return 0;
}


