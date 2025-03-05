// Create and manipulate a GradeBook object; illustrate validation.
#include <iostream>
#include "Gradebook.h"
using namespace std;

// function main begins program execution
int main()
{
  // create two GradeBook objects
  // initial course name of GradeBook1 is too long
  GradeBook myGradeBook1("CS101 Introduction to C++ programming" );
  GradeBook myGradeBook2("CS102 Data structures in C++" );

  // display each GradeBooks coursename
  cout << "GradeBook1 initial course name is: " << myGradeBook1.getCourseName()
       << "GradeBook2 initial course name is: " << myGradeBook2.getCourseName()
       << endl;

  // Modify gradeBook1'courseName ( whith a valid-length string)
  myGradeBook1.setCourseName( "CS101 C++ Programming" );

  // display each GradeBook's courseName
  cout << "\ngradeBook1's course name is: "
    << myGradeBook1.getCourseName()
    << "\ngradeBook2's course name is "
    << myGradeBook2.getCourseName() << endl;
} // end main 