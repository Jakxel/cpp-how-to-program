#include <iostream>
#include <string>
using namespace std;

class Account 
{
  public:
  explicit Account (int balance)
  {
     if (balance > 0)
            accountBalance = balance;
        else 
        {
            cerr << "Your initial balance is invalid. Setting balance to 0." << endl;
            accountBalance = 0;
        }
  }

  void setAccountBalance(int balance)
  {
    if (balance > 0)            
      accountBalance = balance;
    else 
    {
      cerr << "Invalid balance value. Balance remains: " << accountBalance << endl;
    }    
  }

  int getAccountBalance() const
  {
    return accountBalance;
  }
  void displayAccountBalance() const
  {
    cout << getAccountBalance() << "!" << endl;
  }

  void addBalance() const 
  {
    
  }

  private:
  int accountBalance;
};

int main()
{
  Account myAccount1(10);

  cout << "Your actual balance is: " << myAccount1.getAccountBalance() << "!" << endl;

  myAccount1.setAccountBalance(0);

  cout << "Your new balance is: ";
  myAccount1.displayAccountBalance();
};