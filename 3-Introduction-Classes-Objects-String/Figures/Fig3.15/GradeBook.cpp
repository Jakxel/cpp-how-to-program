// Implementations of the GradeBook member-function definitions. 
// The setCourseName function performs validation.

#include <iostream>
#include "Gradebook.h" // include definition of class GradeBook
using namespace std;

// Constructor initializees courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
  setCourseName (name); // validate and store courseName
} // end GradeBook constructor

// function that sets the course name;
// ensures that the course name has at most 25 characters
void GradeBook::setCourseName( string name )
{
  if ( name.size() <= 25 ) // if name has 25 of fewer characters
  courseName = name; // store the course name in the object

  if ( name.size() > 25 ) // if name has more than 25 characters
  {
    // set courseName to firts 25 characters of parameter name
    courseName = name.substr(0, 25); // start at 0, lenght of 25

    cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
      << "Limiting courseName to fisrt 25 characters.\n" << endl;
  } // end if
} // end function setCourseName

// functino to get the course name
string GradeBook::getCourseName() const 
{
  return courseName; // return Objects coursename
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const 
{
  // call getCOurseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // edn function displayMessage

