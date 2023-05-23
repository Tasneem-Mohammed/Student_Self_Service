// This is the implementation file for the Course class
#include "Course.h"
#include <iostream>
//setters and getters
void Course::setCourseChoice(int courseChoice)
{
    this->CourseChoice = courseChoice;
}

int Course::getCourseChoice()
{
    return this->CourseChoice;
}

void Course::setCourseName(string name)
{
    this->courseName = name;
}

string Course::getCourseName()
{
    return courseName;
}

void Course::setCourseCode(int code)
{
    this->courseCode = code;
}

int Course::getCourseCode() const
{
    return this->courseCode;
}
//void Course::addStudent()
//{
//}
// Viewing course information method:
void Course::viewCourseInfo()
{
    cout << "Course Name: " << courseName << endl;
    cout << "Course Code: " << courseCode << endl;
    cout << "Course Credits: " << courseCredits << endl;
    cout << "Course Instructor: " << courseInstructor << endl;
    cout << "Course Location: " << courseLocation << endl;
    cout << "Course Time: " << courseTime << endl;
}

Course::Course(string courseName, int courseCode, int courseCredits, string courseTime)
{
    //need to be coded
}

// Add details of the course:
void Course::addCourse()
{
    // Task 1: After getting each info about the course, we want to set it to the course properties using the setters
    // Task2 2: Add the course to a list of courses
    cout << "Enter course name: ";
    cin >> courseName;
    cout << "Enter course code: ";
    cin >> courseCode;
    cout << "Enter course credits: ";
    cin >> courseCredits;
    cout << "Enter course instructor: ";
    cin >> courseInstructor;
    cout << "Enter course location: ";
    cin >> courseLocation;
    cout << "Enter course time: ";
    cin >> courseTime;
    cout << "Course added successfully!" << endl;
}
// drop course method:
void Course::dropCourse()
{
    cout << "Enter course name: ";
    cin >> courseName;
    cout << "Enter course code: ";
    cin >> courseCode;
    cout << "Enter course credits: ";
    cin >> courseCredits;
    cout << "Enter course instructor: ";
    cin >> courseInstructor;
    cout << "Enter course location: ";
    cin >> courseLocation;
    cout << "Enter course time: ";
    cin >> courseTime;
    cout << "Course removed successfully!" << endl;
}
// Student options in courses
void Course::courseOptionsForStudents()
{
    cout << "1. View Courses" << endl;
    cout << "2. Add Course" << endl;
    cout << "3. Remove Course" << endl;
    cout << "Enter your choice: ";
    cin >> CourseChoice;
    if (CourseChoice == 1)
    {
        viewCourseInfo();
    }
    else if (CourseChoice == 2 || CourseChoice == 3)
    {
        cout << "You can contact the registrar for help." << endl;
        cout << "Email: <registrar@zewailcity.edu.eg>" << endl;
    }
    else
    {
        cout << "Invalid choice. Please try again." << endl;
        courseOptionsForAdmins();
    }
}
// Admin or registrar options for courses:
void Course::courseOptionsForAdmins()
{
    cout << "1. View Courses" << endl;
    cout << "2. Add Course" << endl;
    cout << "3. Remove Course" << endl;
    cout << "Enter your choice: ";
    cin >> CourseChoice;
    if (CourseChoice == 1)
    {
        viewCourseInfo();
    }
    else if (CourseChoice == 2)
    {
        addCourse();
    }
    else if (CourseChoice == 3)
    {
        dropCourse();
    }
    else
    {
        cout << "Invalid choice. Please try again." << endl;
        courseOptionsForAdmins();
    }
}
// Removing a course method:
////void Course::removeStudent(Student s)
////{
////    /*for (auto it = enrolledStudents.begin(); it != enrolledStudents.end(); ++it)
////    {
////        if (*it == s)
////        {
////            enrolledStudents.erase(it);
////            cout << "Student removed from the course." << endl;
////            return;
////        }
////    }
////    cout << "Student not found in the course." << endl;*/
////}
////// adding student:
////void Course::addStudent(Student s)
////{
////    // Iterate and loop through the vector of enrolled students
////   /* for (Student* student : enrolledStudents)
////    {
////        if (student == s)
////        {
////            cout << "Student is already enrolled in the course." << endl;
////            return;
////        }
////    }
////
////    enrolledStudents.push_back(s);
////    cout << "Student added to the course." << endl;*/
////}
