#include <iostream>
#include "Instructor.h"

using namespace std;

Instructor::Instructor()
{
    //code
}

Instructor::~Instructor()
{
    //code
}

void Instructor::officeHours(string h) {
    cout << "Your office hours" << h << endl;
}

void Instructor::setGrades() {
    cout << "Grades have been set." << endl;
}

void Instructor::courseName(string n) {
    cout << "Your course is " << n << endl;
}