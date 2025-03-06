#include <iostream>
#include <string>
using namespace std;

class Employee
{
  public:
  explicit Employee( string fName, string lName, int mSalary)
  {
    firstName = fName;
    lastName = lName;
    monthlySalary = (mSalary >= 0) ? mSalary : 0;
  };
  
  string getFirstName() const { return firstName;}
  string getLastName() const { return lastName;}
  int getMonthlySalary() const { return monthlySalary * 12;}

  void setFisrtName(string fName) { firstName = fName; }
  void setLastName(string lName) { lastName = lName; }
  void setMonthlySalary( int mSalary) { monthlySalary = mSalary; }

  void salaryIncrement (int increment) {
    monthlySalary = monthlySalary + (0.1 * increment);
  } 

  private:
  string firstName;
  string lastName;
  int monthlySalary;
};

int main()
{
  Employee employee1("Victor","Islas",2400);
  Employee employee2("Jakxel","Carreon",3000);

  cout << "Employee " << employee1.getFirstName() << " " << employee1.getLastName() << ", your anual salary is: " << employee1.getMonthlySalary() << endl;
  cout << "Employee " << employee2.getFirstName() << " " << employee2.getLastName() << ", your anual salary is: " << employee2.getMonthlySalary() << endl;

  return 0;
}