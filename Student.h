#pragma once
#include "Person.h"
#include "Course.h"
#include <string>
#include <vector>


using namespace std;
class Course;

class Student : public Person
{
private:
    string major, CourseName;
    float GPA, grade;
    int year, credits, helpChoice, ID;
    vector<pair<Course*, int>> registeredCourses;
    int stdID;

public:
    Student();
    // Constructors
    Student(string first, string last, string user, string mail, string pass,
        string maj, int yr, int cred, int choice, int id);

    // Getters
    string getMajor() const;
    float getGPA() const;
    int getYear() const;
    int getCredits() const;
    int getHelpChoice() const;
    int getStdID() const;

    // Setters
    void setMajor(string maj);
    void setGPA(float gpa);
    void setYear(int yr);
    void setCredits(int cred);
    void setHelpChoice(int choice);
    void setStdID(int id);

    // Methods
    void registerCourse(Course* course);
    void withdrawCourse(Course* course);
    int getStudentGrade(Course* course) const;

    void printRegisteredCourses() const;

    void addCourse(Course* course, int grade);
};