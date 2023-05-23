#include "Registrar.h"

Registrar::Registrar()
{
    //code
}

// Constructor that inint. the class members :
Registrar::Registrar(int stdRollno, int stdID, string stdName)
    : rollno(stdRollno), id(stdID), name(stdName)
{
}
// settters & getters 
void Registrar::setRollno(int stdRollno)
{
    rollno = stdRollno;
}

int Registrar::getRollno()
{
    return rollno;
}

void Registrar::setName(string stdName)
{
    name = stdName;
}

string Registrar::getName()
{
    return name;
}

void Registrar::setID(int stdID)
{
    id = stdID;
}

int Registrar::getID()
{
    return id;
}
// Method for displaying student record
void Registrar::displayStudent()
{
    cout << "Roll Number : " << rollno << endl;
    cout << "Name : " << name << endl;
    cout << "ID : " << id << endl;
}
// Method for deleting a student from the list of students:
//The vector<Registrar>& students is a reference to a 
//vector of Registrar objects.
void Registrar::DeleteStudent(vector<Registrar>& students)
{
    string name;
    cout << "\t\t Enter Name you want to delete" << endl;
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < students.size(); i++) {
        if (students[i].getName() == name) {
            students.erase((students.begin() + i));
            cout << "\t\t Student Removed" << endl;
        }
    }
}

void Registrar::UpdateStudent(vector<Registrar>& students)
{
    string sname;
    bool found = false;
    int choice;

    cout << "\t\tEnter Name to update Record :  " << endl;
    cin.ignore();
    getline(cin, sname);

    for (int i = 0; i < students.size(); i++) {
        if (students[i].getName() == sname) {
            found = true;

            cout << "\t\t--------Student Found---------" << endl;
            cout << "\t\t1. Update Roll Number" << endl;
            cout << "\t\t2. Update Name" << endl;
            cout << "\t\t3. Update ID" << endl;
            cout << "\t\tEnter your choice : " << endl;
            cin >> choice;

            switch (choice) {
            case 1: {
                int nrn;
                cout << "\t\tEnter New Roll Number" << endl;
                cin >> nrn;
                students[i].setRollno(nrn);
                break;
            }
            case 2: {
                string nn;
                cout << "\t\tEnter New Name : " << endl;
                cin.ignore();
                getline(cin, nn);
                students[i].setName(nn);
                break;
            }
            case 3: {
                int nid;
                cout << "\t\tEnter New id : " << endl;
                cin >> nid;
                students[i].setID(nid);
                break;
            }
            default:
                cout << "\t\tInvalid Number " << endl;
            }
        }
        if (!found) {
            cout << "\t\tRecord not Found Here" << endl;
            return;
        }
    }
}
//method for searching for student in the records vector:
void Registrar::SearchStudent(vector<Registrar>& students)
{
    int rollno;
    cout << "\t\tEnter Roll Number : " << endl;
    cin >> rollno;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollno() == rollno) {
            cout << "\t\t--------- student found-----------" << endl;
            students[i].displayStudent();
            return;
        }
    }
}
//method for displaying all students in the records vector:
void Registrar::DisplayAllStudents(vector<Registrar>& students)
{
    if (students.empty()) {
        cout << "\t\t No Students Found" << endl;
        return;
    }
    for (int i = 0; i < students.size(); i++) {
        students[i].displayStudent();
        cout << endl;
    }
}
//method to add a new student in the records vector:
void Registrar::addNewStudent(vector<Registrar>& students)
{
    int rollno, id;
    string name;
    cout << "Enter Rollno : ";
    cin >> rollno;

    //check if the student is already exist and exit
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollno() == rollno) {
            cout << "\t\tstudent is already exist" << endl;
            return;
        }
    }

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;

    Registrar newStudent(rollno, id, name);
    students.push_back(newStudent);

    cout << " Student Added ." << endl;
}