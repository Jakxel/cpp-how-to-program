// Fig 6.3: GradeBook.h
//DEfinition of class Gradebook that find the maximum of three grades.
// Member function are defined in GradeBook.cpp
#include <string>
#include <array>

// GradeBook class definition
class GradeBook
{
public:

  //constatnt -- number of student who took the test
  static const size_t students = 10; // note public data;

  // constructor initializes course name and array of grades
  GradeBook(const std::string &, const std::array< int, students > &);

  void setCourseName(const std::string &); // set the course name
  std::string getCourseName() const;
  void displayMessage() const;
  void processGrades() const;
  int getMinimum() const;
  int getMaximum() const;

  double getAverage() const;
  void outputBarChart() const;
  void outputGrades() const;
private:
  std::string courseName; // name course name for this grade book
  std::array<int ,students> grades; 
};

