#pragma once
#include "TeachingStaff.h"

class Instructor : public TeachingStaff {
private:
    string n, h;
public:
    Instructor();
    ~Instructor();
    void officeHours(string h);
    void setGrades();
    void courseName(string n);
};