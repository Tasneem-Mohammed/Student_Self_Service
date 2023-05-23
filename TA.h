#pragma once
#include "Person.h"
#include "TeachingStaff.h"
#include <string>

using namespace std;

class TA : public TeachingStaff {
private:
    string h, n;
public:
    TA();
    void officeHours(string h);
    void setGrades();
    void courseName(string n);
};


