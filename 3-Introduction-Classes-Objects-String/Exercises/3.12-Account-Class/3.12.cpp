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

  void Credit(int amount)
   {
      if (amount > 0)
        accountBalance += amount;
      else
        cerr << "Invalid credit amount." << endl;
    }

  void debit(int amount) 
  {
    if (amount > accountBalance)
      cerr << "Debit amount exceeded account balance." << endl;
    else
      accountBalance -= amount;
  }

  int getAccountBalance() const
  {
    return accountBalance;
  }
  void displayAccountBalance() const
  {
    cout << getAccountBalance() << "!" << endl;
  }

  void credit (int credit)
  {
    if ( credit > accountBalance)
      cerr << "Your credit is invalid" << endl;
    else
    {
      accountBalance += credit;
    }
  }

  private:
  int accountBalance;
};

int main()
{
  Account account1(10);
  Account account2(-2);

  cout << "Account 1 balance: " << account1.getAccountBalance() << endl;
  cout << "Account 2 balance: " << account2.getAccountBalance() << endl;

  account1.credit(30);
  cout << "Account 1 balance after credit: " << account1.getAccountBalance() << endl;

  account1.debit(20);
  cout << "Account 1 balance after valid debit: " << account1.getAccountBalance() << endl;

  account1.debit(100);
  cout << "Account 1 balance after invalid debit: " << account1.getAccountBalance() << endl;

  return 0;
};