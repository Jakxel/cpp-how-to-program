// Define class GadeBok with a membe function that taes a parameter,
// create a GadeBook obect and call its displayMessage function.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
  public:
  // function that displays a welcome message to the GradeBook user
  void displayMessage( string courseName ) const
  {
    cout << "Welcome to the gradeBook for\n" << courseName << "!" << endl;
  } // end function displayMessage
}; // end class GradeBook

// function main begins the program execution
int main () 
{
  string nameOfCourse; // string of characters to store the course name
  GradeBook myGradeBoook; // create a GradeBook object named myGradeBook

  // Prompt for and input course name
  cout << "Please enter a course name:" << endl;
  getline(cin,nameOfCourse); // read a course name with blanks
  cout << endl; //output a blank line

  // call myGradeBook displayMessage function
  // and pass nameOfCourse as an argument 
  myGradeBoook.displayMessage(nameOfCourse);
} // end main 