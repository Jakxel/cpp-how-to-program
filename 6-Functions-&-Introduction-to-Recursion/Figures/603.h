// Fig 6.3: GradeBook.h
//DEfinition of class Gradebook that find the maximum of three grades.
// Member function are defined in GradeBook.cpp
#include <iostream>

// GradeBook class definition
class GradeBook
{
public:
    explicit GradeBook (std::string); // initialize course name
    void setCourseName (std::string); // set the course name
    std::string getCourseName () const; // retrieve the course na,e
    void displayMessage() const; // Display a welcome message
    void inputGrades(); // Input three grades from user
    void displayGradeReport() const; // display report based on the grades
    int maximum ( int, int, int) const; // determine mas of 3 values
private:
    std::string courseName; // course name for this Gradebook
    int maximunGrade; // maximun of three grades
}; // end class gradebook