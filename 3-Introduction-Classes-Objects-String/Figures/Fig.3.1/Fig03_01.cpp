// Define class GradeBook whit a member function displayMessage
// Create a gradeBook object, and call its displayMessage function.
#include <iostream>

using namespace std;

// GradeBook class definition
class GradeBook
{
  public:
  // function that displays a welcome message to the gradebook user
  void displayMessage() const
  {
    cout << "Welcome to the gradeBook!" << endl;
  } // end function displayMessage
}; // end class GradeBook

// Function main begins program execution
int main()
{
  GradeBook myGradeBook; // create a GradeBook object named myGradeBook
  myGradeBook.displayMessage(); // call object's displayMessage function
} // end main 