// FIg 6.4 GradeBook.cpp
// Member-function definitions for class GradeBook that
// determines the maximum of three grades
#include <iostream>
using namespace std;

#include "603.h"  // include definition of class GradeBook

// Constructor initializes courseName with string supplied as argument:
// initializes maximumGrade to 0
GradeBook::GradeBook( string name) 
    : maximunGrade( 0 ) // this value will be replaced by the maximum grade
{
    setCourseName( name ); // validate and store courseName
} // end GradeBook constructor

// function to set the course name: limits name to 25 or fewer characters
void GradeBook::setCourseName( string name )
{
    if (name.size() <= 25) // if name has 25 or fewer characters
        courseName = name; // store the course name in the object
    else // if name is longer than 25 characters
    { // set courseName to firts 25 characters of parameter name
        courseName = name.substr(0, 25); // select firts 25 characters
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to firts 25 characters. \n" << endl;
    } // end of..else
} // end function setCourseName

// Function to retrieve the courseName 
string GradeBook::getCourseName () const
{
    return courseName;
}//  end function getCourseName

// Display a welcome message to the GradeBooik user 
void GradeBook::displayMessage() const
{
    //this statement call getCourseName to get the
    // name of the course this GradeBook represent
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
    << endl;
} // end function displayMessage

// Input three grades from user; determine maximun
void GradeBook::inputGrades()
{
    int grade1; // firts grade entered by user
    int grade2; // Second ......
    int grade3; // Third ......

    cout << "Enter three integer grades: ";
    cin >> grade1 >> grade2 >> grade3;

    //store maximum in member maximumGrade
    maximunGrade = maximum(grade1, grade2, grade3);
} // end function inputGrade

// return the maximum of its three integer parameters
int GradeBook::maximum(int x, int y, int z) const
 {
    int maximumValue = x; // assume x is the largest to start

    // determine whether y is greater than maximumValue
    if (y > maximumValue)
    {
        maximumValue = y;
    }

    if ( z > maximumValue)
    {
        maximumValue = z;
    }
    
    return maximumValue;
 } // end function maximum

 // display a report based on the grades entered by user
 void GradeBook::displayGradeReport() const {
    // output maximum of grades entered
    cout << "Maxium of grades entered: " << maximunGrade << endl;
 } // end function displayGradeReport