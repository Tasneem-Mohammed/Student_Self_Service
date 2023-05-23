///This class has 3 methods : office hours method, 
//setting grades and the department name of the professor
#include <iostream>
#include "Professor.h"

using namespace std;

Professor::Professor()
{
    //code
}

void Professor::officeHours(string h) {
    cout << "Professor office hours" << h << endl;
}

void Professor::setGrades() {
    cout << "Grades have been set." << endl;
}

void Professor::setDepartmentName(string n) {
    cout << "Professor's Department is  " << n << endl;
}