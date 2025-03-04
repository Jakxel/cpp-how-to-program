// GradeBook class definition in a separate file from main.
#include <iostream>
#include <string>

// GradeBook class definition
class GradeBook
{
  public:  
  // Constructor intializes courseName with string supplied as argument
  explicit GradeBook( std::string name ) : courseName ( name ) // member initalizer to intialize courseName
  {
    // empty body
  } // end GradeBook constructor 

  // function to set the course name
  void setCourseName( std::string name )
  {
    courseName = name; // store the course name in the object
  }// end function setCourseName

  // Function to get the course name
  std::string getCourseName() const 
  {
    return courseName; // return objects courseName
  } // end function getCourseName

  // display a welcome message to the gradeBook user
  void displayMessage() const 
  {
    // call getCOurseName to get the courseName 
    std::cout << "Welcome to the grade Book for\n" << getCourseName() << "!" << std::endl;
  } // end function displayMessage

  private:  
    std::string courseName; // Course name for this GradeBook
}; // end class GradeBook