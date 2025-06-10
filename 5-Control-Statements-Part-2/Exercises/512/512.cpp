// Drawings patterns with nested for loop:
#include <iostream>
using namespace std;

void figure1 () {
    int collumn = 5;
    int row = 5;
    for (int i = 0; i <= row; ++i) {

        for (int j = 0; j < i; ++j)
        { 
            cout << "*"; 
        }
        cout << endl;

    }
}
void figure2 ()
{
    int collumn = 5;
    int row = 5;
    for (int i = row; i >= 1; --i) {

        for (int j = 0; j < i; ++j)
        { 
            cout << "*"; 
        }
        cout << endl;

    }
}
void figure3() {
    int collumn = 5;
    int row = 5;
    for (int i = 0; i < row; ++i) {

        for (int j = 0; j < i; ++j)
        { 
            cout << " "; 
        }
        for (int j = row; j > i; --j)
        { 
            cout << "*"; 
        }
        cout << endl;

    }
}
void figure4 () {
    int collumn = 5;
    int row = 5;
    for (int i = row; i >= 0; --i) {

        for (int j = 0; j < i; ++j)
        { 
            cout << " "; 
        }
        for (int j = row; j > i; --j)
        { 
            cout << "*"; 
        }
        cout << endl;

    }
}


int main() {
    figure1();
    figure2();
    figure3();
    figure4();
    return 0;
}

/* optimizade code 
#include <iostream>
using namespace std;

void printChars(char ch, int count) {
    for (int i = 0; i < count; ++i)
        cout << ch;
}

void figure1(int row) {
    for (int i = 0; i <= row; ++i) {
        printChars('*', i);
        cout << endl;
    }
}

void figure2(int row) {
    for (int i = row; i >= 1; --i) {
        printChars('*', i);
        cout << endl;
    }
}

void figure3(int row) {
    for (int i = 0; i < row; ++i) {
        printChars(' ', i);
        printChars('*', row - i);
        cout << endl;
    }
}

void figure4(int row) {
    for (int i = row; i >= 0; --i) {
        printChars(' ', i);
        printChars('*', row - i);
        cout << endl;
    }
}

int main() {
    int row = 5;

    figure1(row);
    figure2(row);
    figure3(row);
    figure4(row);

    return 0;
}*/