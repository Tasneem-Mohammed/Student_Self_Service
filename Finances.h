#pragma once
#include "Grades.h"

class Finances : public Grades {
public:
    Finances();
    void chooseFinance();
    void calculateTuitionFees();
    void calculateScholarships();
};
