#include "Student.h"


// Constructor initializes member variables using an initializer list

Student::Student()
{
    //code
}

Student::Student(string first, string last, string user, string mail, string pass,
    string maj, int yr, int cred, int choice, int id)
    : Person(first, last, user, mail, pass), major(maj), GPA(0),
    year(yr), credits(cred), helpChoice(choice), stdID(id) {}

// Getters
string Student::getMajor() const { return major; }

float Student::getGPA() const { return GPA; }

int Student::getYear() const { return year; }

int Student::getCredits() const { return credits; }

int Student::getHelpChoice() const { return helpChoice; }

int Student::getStdID() const { return stdID; }

// Setters
void Student::setMajor(string maj) { major = maj; }

void Student::setGPA(float gpa) { GPA = 3.4; }

void Student::setYear(int yr) { year = yr; }

void Student::setCredits(int cred) { credits = cred; }

void Student::setHelpChoice(int choice) { helpChoice = choice; }

void Student::setStdID(int id) { stdID = id; }

// Methods
void Student::registerCourse(Course* course)
{
    // Add the course to the registered courses list with a grade of 0
    registeredCourses.push_back(make_pair(course, 0));
    //course->addStudent(this);
}
// Method for  adding a course to the list of registered courses
void Student::addCourse(Course* course, int grade)
{
    registeredCourses.push_back(make_pair(course, grade));
}

void Student::withdrawCourse(Course* course)
{
    for (auto it = registeredCourses.begin(); it != registeredCourses.end(); ++it)
    {
        if (it->first == course)
        {
            registeredCourses.erase(it);
            //course->removeStudent(this);
            break;
        }
    }
}

int Student::getStudentGrade(Course* course) const
{
    for (const auto& c : registeredCourses)
    {
        if (c.first == course)
        {
            // Return the grade for the course
            return c.second;
        }
    }
    return -1;
}
// Method for printing the list of registered courses for a student
// by  Printing  the name, code, and grade of each registered course
void Student::printRegisteredCourses() const
{
    cout << "Registered courses and grades for student " << getFirstName() << " " << getLastName() << " (ID: " << getStdID() << "):" << endl;
    for (const auto& c : registeredCourses)
    {
        cout << "- " << c.first->getCourseName() << " (" << c.first->getCourseCode() << "): " << c.second << endl;
    }
}
