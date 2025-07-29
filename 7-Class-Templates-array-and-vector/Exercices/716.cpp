#include <iostream>
#include <random>
#include <array>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
    array<int, 13> resultsList = {};   
    default_random_engine generator(time(0));  
    uniform_int_distribution<int> diceRoll(1, 6);

    for (int i = 0; i < 36000; ++i) {
        int result = diceRoll(generator) + diceRoll(generator);
        resultsList[result]++;
    }

    cout << "Rolldice results\n";
    cout << fixed << setprecision(2);
    for (int i = 2; i <= 12; ++i) {
        double percent = resultsList[i] / 36000.0 * 100;
        cout << setw(2) << i << ": " << setw(5) << resultsList[i] << " (" << percent << "%)\n";
    }

    return 0;
}
