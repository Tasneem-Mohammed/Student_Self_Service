// The TeachingStaff class is inherited from the Person class
#pragma once
#include <iostream>
#include "Person.h"
#include <string>

using namespace std;

class TeachingStaff : public Person {
public:
    // pure virtual functions:
    virtual void officeHours();
    virtual void setGrades();
    virtual void courseName();
};






