// Fig 6.5 fig6_05.cpp
// Create GradeBook object, into gades and display grade report.
#include "603.h" // include definition of class GradeBook

int main()
{
    // create GradeBook object
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage(); // display welcome message
    myGradeBook.inputGrades(); // read grades from user
    myGradeBook.displayGradeReport(); // display report based on grades
}