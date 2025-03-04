#include <iostream>
#include "GradeBook.h"
using namespace std;

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

