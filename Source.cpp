// This  file includes the main.cpp and several class headers and defines functions 
//for three phases of the self service system:
// 1. Student phase
// 2. Teaching Staff phase
// 3. Registrar phase.
#include <iostream>
#include <cstdlib>
#include "Finances.h"
#include "Course.h"
#include "Grades.h"
#include "Help.h"
#include "Instructor.h"
#include "Materials.h"
#include "Person.h"
#include "Professor.h"
#include "Registrar.h"
#include "Student.h"
#include "TA.h"
#include "TeachingStaff.h"

using namespace std;

// This is the student phase fn, It takes a pointer to a Student object as an argument.
void stdPhase(Student* s)
{
    Help h;
    Finances finance;
    std::cout << "Welcome " << s->getFirstName() << " " << s->getLastName() << endl;
    while (true)
    {
        std::cout << "What do you want to do?" << endl;
        std::cout << "1) Show my Enrolled Courses" << endl;
        std::cout << "2) Show my Grades" << endl;
        std::cout << "3) Finances" << endl;        // scholarships or tuition fees
        std::cout << "4) Help" << endl;           // help: materials or academic advising

        int choice, ans;
        std::cin >> choice;

        if (choice > 4 || choice < 1)
        {
            std::cout << "Please Enter a Valid input";
        }
        else
        {
            switch (choice)
            {
            case 1:
                // Show courses
                std::cout << "Registered courses and grades for " << s->getFirstName() << " " << s->getLastName() << ":" << endl;
                s->printRegisteredCourses();
                break;
            case 2:
                // Show Grades
                std::cout << "Your GPA is : "<< s->getGPA() << endl;
                break;
            case 3:
                //// show Finances:
                finance.chooseFinance();
                break;
            case 4:
                h.help();
                break;
            default:
                // Invalid choice
                break;
            }

            int input;
            while (true)
            {
                std::cout << "Do you want to do something else? Enter (1) for Yes, (2) for No!" << endl;
                std::cin >> input;
                if (input == 1)
                {
                    break;
                }
                else if (input == 2) // Exit the program
                {
                    exit(0);
                }
                else
                {
                    std::cout << "Enter a Valid Value" << endl;
                }
            }
        }
    }
}

// This is the teaching staff phase fn, It takes pointers to an Instructor, a TA, and a Professor object as arguments.
void teachingStaffPhase(Instructor* instructor, TA* ta, Professor* professor)
{
    std::cout << "Welcome, Teaching staff" << endl;
    std::cout << "Please enter your role, are you a" << endl;
    std::cout << "1) Teaching Assistant" << endl;
    std::cout << "2) Professor" << endl;
    std::cout << "3) Instructor" << endl;

    int role;
    std::cin >> role;
    while (true) {
        switch (role)
        {
        case 1:
        {
            // TA phase
            std::cout << "Welcome, Teaching Assistant" << endl;
            //   TA* ta = new TA();
            ta->officeHours("Monday 3-4 pm");
            ta->courseName("Physics");


            break;
        }
        case 2:
        {
            // Professor phase
            std::cout << "Welcome, Professor" << endl;
            //  Professor* professor = new Professor();
            professor->setDepartmentName("Computer Science");
            professor->officeHours("Tuesday 2-4 pm");

            break;
        }
        case 3:
        {
            // Instructor phase
            std::cout << "Welcome, Instructor" << endl;
            //   Instructor* instructor = new Instructor();
            instructor->setFirstName("Mr.Ali");
            instructor->setLastName("Mohammed");
            instructor->officeHours("Wednesday & Thursday from 1 to 3 pm");
            instructor->courseName("Mathematics");

            break;
        }
        default:
        {
            std::cout << "Invalid option. Please try again." << endl;
            break;
        }
        }
        std::cout << "Do you want to continue? (Y/N)" << endl;

        char ch;
        std::cin >> ch;

        if (ch == 'N' || ch == 'n')
        {
            break;

        }
    }
}

// This function is the registrar phase :
void RegistrarPhase(){
    // we created a vector of Registrar objects to store student data:
    vector<Registrar> students;
    students.push_back(Registrar(1, 20, "Ali"));

    char choice;
    do {
        int op;
        std::cout << "\t\t--------------------------" << endl;
        std::cout << "\t\t Registrar" << endl;
        std::cout << "\t\t--------------------------" << endl;
        std::cout << "\t\t1. Add New Student" << endl;
        std::cout << "\t\t2. Display All Students" << endl;
        std::cout << "\t\t3. Search Student" << endl;
        std::cout << "\t\t4. Update Student" << endl;
        std::cout << "\t\t5. Delete Student" << endl;
        std::cout << "\t\t6. Exit" << endl;
        std::cout << "\t\tEnter Your Choice: " << endl;
        std::cin >> op;
        Registrar regist;
       
        switch(op) {

        case 1:
            regist.addNewStudent(students);
            break;
        case 2:
            regist.DisplayAllStudents(students);
            break;
        case 3:
            regist.SearchStudent(students);
            break;
        case 4:
            regist.UpdateStudent(students);
            break;
        case 5:
            regist.DeleteStudent(students);
            break;
        case 6:
            exit(1);
        default:
            std::cout << "\t\tInvalid Number" << endl;
        }
        std::cout << "\t\tDo You Want To Continue [y/N] ? :";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}

// The main function that asks the user to choose which phase of the system he want to enter:
int main(){
    // Creating object pointers :
    // by dynamic memory allocation: we created  new objects of the Student class on the heap
    // Three Student objects and three Course objects are created using the new operator
    // and we initialized their members by the arguments in the constructor.

    Instructor* instructor = new Instructor();
    Professor* professor = new Professor();
    TA* ta = new TA();

    Student* student1 = new Student("Jane", "Doe", "jadoe", "jdoe@example.com", "password", "Computer Science", 2, 60, 1, 1001);
    Student* student2 = new Student("John", "Doe", "jdoe", "jadoe@example.com", "password", "Data Scientist", 3, 90, 2, 1002);
    Student* student3 = new Student("Jolly", "Smith", "bsmith", "bsmith@example.com", "password", "Software Engineer", 1, 30, 3, 1003);


    Course* course1 = new Course("Calculus", 101, 2, "Monday : 9:00-10:30  Wednesday :  11:00-12:30");
    Course* course2 = new Course("Linear Algebra", 104, 3, "Tuesday : 9:00-10:30  Thursday  : 11:00-12:30");
    Course* course3 = new Course("Object Oriented Programming", 151, 3, "Sunday  : 9:00-10:30  Tues : 11:00-12:30");

   /* course1->addStudent(student1);
    course2->addStudent(student1);
    course3->addStudent(student1);*/

   
    std::cout << "Welcome to The Self Service System!" << endl;
    while (true)
    {
        std::cout << "Please choose who you are:" << endl;
        std::cout << "1) Student" << endl;
        std::cout << "2) Teaching Staff" << endl;
        std::cout << "3) Registrar" << endl;
        std::cout << "4) Quit" << endl;

        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // the student phase
            stdPhase(student1);
            break;
        }
        case 2:
        {
            teachingStaffPhase(instructor, ta, professor);
            break;
        }
        case 3:
        {
            // Registrar phase
            RegistrarPhase();
            break;
        }
        case 4:
        {
            // Quit the program
            std::cout << "Goodbye!" << endl;
            delete student1;
            delete student2;
            delete student3;
            delete course1;
            delete course2;
            delete course3;
            delete instructor;
            delete ta;
            delete professor;
            exit(0);
        }
        default:
        {
            std::cout << "Invalid option. Please try again." << endl;
            break;
        }
        }
    }

    return 0;
}
