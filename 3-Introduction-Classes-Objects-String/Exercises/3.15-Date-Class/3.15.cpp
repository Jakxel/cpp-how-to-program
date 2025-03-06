#include <iostream>
#include <string>
using namespace std;

class Date {
  public :
  explicit Date (int m , int d, int y) {
    month = ((m > 0) && (m <= 12)) ? m : 1;
    day = d;
    year = y;
  }

  int getMonth() const { return month;}
  int getDay () const { return day;}
  int getYear () const  { return year;}

  void setMonth(int m) { month = m;} 
  void setDay(int d) { day = d;} 
  void setyear(int y) { year = y;}

  void displayDate () const{
    cout << "Your date is: " << month << "/" << day << "/" << year << endl;
  }

  private :
  int month;
  int day;
  int year;
};

int main () {
  Date date1(8,26,2004);
  date1.displayDate();
};