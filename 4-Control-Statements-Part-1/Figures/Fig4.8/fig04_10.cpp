// Create Gradebook object and invoke its determineClassAverage function.
#include "GradeBook.h" // include definition of class GradeBook.

int main()
{
  // create GradeBook object myGradeBook and pass course name to the constructor
  // pass course name to contructor
  GradeBook myGradeBook("CS101 C++ Programming" );

  myGradeBook.displayMessage(); // dispay welcome message 
  myGradeBook.determineClassAverage(); // find average of 10 grades
} // end main
