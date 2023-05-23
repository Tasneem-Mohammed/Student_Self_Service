#pragma once
#include "Person.h"
#include <string>
#include <vector>
#include "TeachingStaff.h"

class Professor : public TeachingStaff {
private:
    string n, h;
public:
    Professor();
    void officeHours(string h);
    void setGrades();
    void setDepartmentName(string n);
};