#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));      
 
    cout << "a) " << 2 + 2 * (rand() % 5) << endl;

    cout << "b) " << 3 + 2 * (rand() % 5) << endl;

    cout << "c) " << 6 + 4 * (rand() % 5) << endl;

    return 0;
}
