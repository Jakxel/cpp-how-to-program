// Member-function definitions for class Gradeboook that solves the
// class average program with counter-controlled repetition.
#include <iostream>
#include "GradeBook.h"
using namespace std;

//Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name) 
{
  setCourseName ( name ); // validate and store courseName 
} // end GradeBook constructor

// function to set the course name;
// ensures that the course name has at most 25 characters
void GradeBook::setCourseName ( string name)
{
  if ( name.size() <= 25 ) // if name has 25 or fewer characters 
    courseName = name; // store the course name in the object
  else // if name is longer than 25 characters
  { // set courseName to first 25 characters of parameter name
    courseName = name.substr( 0 , 25); // select fisrt 25 characters 
    cerr << "Name\"" << name << "\" exceeds maximum length (25).\n" << "Limiting courseName to fisrt 25 characters.\n" << endl; 
  } // end if...else
} // end function setCourseName

// function to retrieve the course name 
string GradeBook::getCourseName() const{
  return courseName;
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
  cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
} // end function dispalyMessage


// determine class average based on 10 grades entered by the user
void GradeBook::determineClassAverage() const 
{
  int total = 0; // sum of grades entered by the user
  unsigned int gradeCounter = 1; // number of grade to be entered next

  // processing phase
  while ( gradeCounter <= 10 ) // loop 10 times
  {
    cout << "Enter grade: "; // prompt for input
    int grade = 0; // grade valuue entered by the user
    cin >> grade; // input next grade
    total = total + grade; // add grade to total
    gradeCounter = gradeCounter + 1; // increment counter by 1 
  } // end line 

  // termination phase 
  int average = total / 10; // ok to mix declaration and calculation

  // display total and average of grade 
  cout << "\nTotal of all 10 grades is: " << total << endl;
  cout << "Class average is: " << average << endl;
} // end function determineClassAverage





