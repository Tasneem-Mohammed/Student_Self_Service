#pragma once
#include "Student.h"
#include "Person.h"
#include <string>
#include <vector>

using namespace std;

class Course
{
private:
    int courseCode, CourseChoice;
    int courseCredits;
    string courseInstructor;
    string courseName;
    string courseLocation;
    string courseTime;
    //vector<Student> enrolledStudents;

public:
    Course(string courseName, int courseCode, int courseCredits, string courseTime);
    void addCourse();
    void dropCourse();

    void setCourseChoice(int courseChoice);
    int getCourseChoice();
    void setCourseName(string name);
    string getCourseName();
    void setCourseCode(int code);
    int getCourseCode() const;
   
    //void removeStudent(Student s);
   /* void addStudent(student);*/
    void viewCourseInfo();
    void courseOptionsForStudents();
    void courseOptionsForAdmins();

};
