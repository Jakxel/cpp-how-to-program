// Instantiating multiple objects of the GradeBook class and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
  public:  
  // Constructor intializes courseName with string supplied as argument
  explicit GradeBook( string name ) : courseName ( name ) // member initalizer to intialize courseName
  {
    // empty body
  } // end GradeBook constructor 

  // function to set the course name
  void setCourseName( string name )
  {
    courseName = name; // store the course name in the object
  }// end function setCourseName

  // Function to get the course name
  string getCourseName() const 
  {
    return courseName; // return objects courseName
  } // end function getCourseName

  // display a welcome message to the gradeBook user
  void displayMessage() const 
  {
    // call getCOurseName to get the courseName 
    cout << "Welcome to the grade Book for\n" << getCourseName() << "!" << endl;
  } // end function displayMessage

  private:  
    string courseName; // Course name for this GradeBook
}; // end class GradeBook

// function main begins progam execution
int main()
{
  // create two GradeBook objects
  GradeBook myGradeBook1("CS101 Introduction to C++ programming" );
  GradeBook myGradeBook2("CS102 Data structures in C++" );

  // display intial values of the courseName for each GradeBook
  cout << "GradeBook1 created for course: " << myGradeBook1.getCourseName()
       << "GradeBook2 created for course: " << myGradeBook2.getCourseName()
       << endl;
} // end main 

