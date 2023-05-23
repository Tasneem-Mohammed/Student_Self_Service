#pragma once
#include "Person.h"
#include <string>
#include <vector>

using namespace std;

class Registrar : public Person {
private:
    int rollno, id;
    string name;

public:
    Registrar();
    Registrar(int stdRollno, int stdID, string stdName);
    void setRollno(int stdRollno);
    int getRollno();
    void setName(string stdName);
    string getName();
    void setID(int stdID);
    int getID();
    void displayStudent();
    void DeleteStudent(vector<Registrar>& students);
    void UpdateStudent(vector<Registrar>& students);
    void SearchStudent(vector<Registrar>& students);
    void DisplayAllStudents(vector<Registrar>& students);
    void addNewStudent(vector<Registrar>& students);
};

