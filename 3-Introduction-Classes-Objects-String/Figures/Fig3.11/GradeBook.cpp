// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // Include definition of class GradeBook
using namespace std;

// Constructor intializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
  : courseName(name) // member initializer to initialize courseName
  {
    // empty body
  } // end GradeBook constructor

  // function to set the course name
  void GradeBook::setCourseName( string name )
  {
    courseName = name; // store teh course name in the object
  } // end function setCourseName

  // Function to get the course name
  string GradeBook::getCourseName() const
  {
    return courseName; // return objects coourseName 
  } // end function getCourseName

  // display a welcome message to the gradeBook user
  void GradeBook::displayMessage() const 
  {
    // call getCourseName to get the courseName
    cout << "Welcome to the GradeBook for\n" << getCourseName() <<"!"<<endl;
  } // end function displayMessage


