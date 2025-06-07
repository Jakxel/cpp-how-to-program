// GradeBook class definition presents the public interface of
// the class. Member-function definitions appear in GradeBook.cpp.
#include <string> // class GradeBook uses C++ string class
// ...existing code...
class GradeBook
{
  public:
    explicit GradeBook(std::string); // constructor intialize courseName
    void setCourseName(std::string); // sets the course name 
    std::string getCourseName() const; // gets the course name
    void displayMessage() const; // display a welcome message

  private:
    std::string courseName; // course name for this GradeBook
    int aCount; // count of A grades
    int bCount; // count of B grades
    int cCount; // count of C grades
    int dCount; // count of D grades
    int fCount; // count of F grades
};
// ...existing code...