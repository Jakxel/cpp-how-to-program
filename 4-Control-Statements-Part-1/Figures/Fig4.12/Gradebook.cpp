// Member-function definitions for class Gradeboook that solves the
// class average program with counter-controlled repetition.
#include <iostream>
#include <iomanip> // parametized stream manipulator
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
  unsigned int gradeCounter = 0; // number of grades entered

  // processing phase
  //prompt for input adn read grade from user
  cout << "Enter grade or -1 to quit: ";
  int grade = 0; // grade value
  cin >> grade; // input grade or sentinel value

  // loop until sentinel value read from user
  while ( grade != -1 ) // whule grade is not -1
  {
    total = total + grade; // add grade to total
    gradeCounter = gradeCounter + 1; // increment counter

    // prompt for input and read next grade from user
    cout << " Entered grade -1 to quit: ";
    cin >> grade; // input grade or sentinel value
  } // end line 

  // termination phase 
  if (gradeCounter != 0) // if user entered at least one grade...
  {
    // calculate average of all grades entered 
    double average = static_cast < double >(total) / gradeCounter;

    // display total and average (with two digits of precision 
    cout << "\nTotal of all " << gradeCounter << " grades entered is "
    << total << endl;
    cout << setprecision(2) << fixed;
    cout << "Class average is " << average << endl;
  }// end if
  else // no grades were entered, so output appropriate message 
  cout << "No grades were entered" << endl;
} // end function determineClassAverage




