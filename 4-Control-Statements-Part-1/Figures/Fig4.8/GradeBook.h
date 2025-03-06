//Definition of class Gradebook that determines a class average
// Member functions are defined in GradeBook.cpp
#include <string> // class GradeBook uses C++ string class

// GradeBook class definition
class GradeBook
{
  public:
  explicit GradeBook(std::string); // constructor intialize courseName
  void setCourseName(std::string); // sets the course name 
  std::string getCourseName() const; // gets the course name
  void displayMessage() const; // display a welcome message
  void determineClassAverage() const; // averages user-entered grades

  private:
  std::string courseName; // course name for this GradeBook
}; // end class GradeBook