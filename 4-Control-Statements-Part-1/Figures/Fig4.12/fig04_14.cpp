// Create GradeBook object and invoke its determineClassAverage function
#include "GradeBook.h" // include definition of class GradeBook

int main()
{
  // create gradeBook object myGradebook and 
  // pass course name to constructor 
  GradeBook myGradeBook("CS101 C++ Programming" );

  myGradeBook.displayMessage(); //dsiplay welcome message
  myGradeBook.determineClassAverage(); // find average of 10 grades
} // end main 


