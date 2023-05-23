#pragma once
#include <iostream>

using namespace std;

class Grades {
protected:
    float currentGPA, targetGPA, totalGPA, finalGPA;
    int currentCredits, targetCredits, totalCredits;
public:
    Grades();
    // setters
    void setcurrentGPA(float cGPA);
    void settargetGPA(float tGPA);
    void settotalGPA(float total);
    void setfinalGPA(float fGPA);
    void setcurrentCredits(int credits);
    void settargetCredits(int target);
    void settotalCredits(int total2);
    // getters
    float getcurrentGPA();
    float gettargetGPA();
    float gettotalGPA();
    float getfinalGPA();
    int getcurrentCredits();
    int gettargetCredits();
    int gettotalCredits();

    //other methods:
    void viewGPA();
    float calculateTargetedGPA();
    float GPAInquiries();
};