#include <array>
#include <cstddef>
#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice();

int chaseGame()
{
  enum Status {CONTINUE,WON,LOST};
  unsigned int myPoint = 0;
  Status gameStatus = CONTINUE;
  int gamesPlayed = 0;
  unsigned int sumOfDice = rollDice();

  switch (sumOfDice) {
    case 7:
    case 11:
      gameStatus = WON;
      break;
    case 2:
    case 3:
    case 12:
      gameStatus = LOST;
      break;
    default:
      gameStatus = CONTINUE;
      myPoint = sumOfDice;
      break;
  }

  while (CONTINUE == gameStatus) {
    sumOfDice = rollDice();
    ++gamesPlayed;

    if (sumOfDice == myPoint)
      gameStatus = WON;
    else 
      if (sumOfDice == 7)
        gameStatus = LOST;
  }
  return gamesPlayed;
}

int main() {
  srand(static_cast<unsigned int>(time(0)));
  array<int, 20>gamesPlayed = {};
  for (size_t i = 0; i < 1000; ++i ){
    int game = chaseGame();
       gamesPlayed[game]++;
  }
  
  cout << "Number of games to win media\n";
  for (size_t j = 0; j <= gamesPlayed.size(); ++j){
    if (j == 0) 
      cout << "Numbers of loses: " << gamesPlayed[j] << endl;
    else
    cout << "Numbers of wins " <<  j << ": " << gamesPlayed[j] << endl;
  }

}
unsigned int rollDice() {
  unsigned int die1 = 1 + rand() %6;
  unsigned int die2 = 1 + rand() %6;

  unsigned int sum = die1 + die2;

  return sum;
}
