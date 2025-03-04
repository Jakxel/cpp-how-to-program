// Define class GradeBook that contains a courseName data member 
// and member functions to set and get its value;
// Create and manipulate a GradeBook object with these functions.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
  public:
  // Function that sets the course name
  void setCourseName( string name ){
    courseName = name; // store the course name in the object
  } // end function setCourseName

  //Function that gets the course name
  string getCourseName () const
  {
    return courseName; // return the objects courseName
  } // end function getCOurse 

  // function that display  a welcome message 
  void displayMessage() const
  {
    //this statemenr calls getCourseName to get the name of the course this GradeBook represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
  } // end function displayMessage
  private:
  string courseName = "null"; // course name for this GradeBook
}; // end class gradeBook

// Function main begins program executions 
int main()
{
  string nameOfCourse; // string characters to store teh course name
  GradeBook myGradeBook; // create a GradeBook object named myGradeBoook

  //Display the initial value of the courseName
  cout << "initial course name is: " << myGradeBook.getCourseName() << endl;

  //Prompt for, input and set course Name
  cout << "\nPlease enter the course name: " << endl;
  getline( cin, nameOfCourse ); // Read a course name with blanks
  myGradeBook.setCourseName(nameOfCourse); // set the new courseName

  cout << endl; // outputs a blank line 
  myGradeBook.displayMessage(); // display message with new course name
} // end main
