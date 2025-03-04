// Define class GradeBook that contains a courseName data member 
// and member functions to set and get its value;
// Create and manipulate a GradeBook object with these functions.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // Function that sets the course name
    void setCourseName(string name) {
        courseName = name; // Store the course name in the object
    } // end function setCourseName

    // Function that gets the course name
    string getCourseName() const {
        return courseName; // Return the object's courseName
    } // end function getCourseName

    // Function that displays a welcome message
    void displayMessage() const {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // end function displayMessage

private:
    string courseName; // Default course name is "null"
}; // end class GradeBook

// Function main begins program execution
int main()
{
    string nameOfCourse; // String variable to store the course name
    GradeBook myGradeBook; // Create a GradeBook object named myGradeBook

    // Display the initial value of the courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    // Prompt for input and set course name
    cout << "\nPlease enter the course name: " << endl;
    getline(cin, nameOfCourse); // Read a course name with spaces

    myGradeBook.setCourseName(nameOfCourse); // Set the new courseName

    cout << endl; // Output a blank line
    myGradeBook.displayMessage(); // Display message with the new course name

    return 0;
} // end main