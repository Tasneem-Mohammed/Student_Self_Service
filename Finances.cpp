#include "Finances.h"

Finances::Finances()
{
    // code
}

//This is a method to ask the student to choose between calculating tuition fees or scholarship
void Finances::chooseFinance()
{
    int choice;
    // Keep asking the student until he enter a valid choice of 1 or 2
    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate tuition fees" << endl;
        cout << "2. Calculate scholarship" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != 1 && choice != 2)
        {
            cout << "Invalid choice. Please try again." << endl;
        }

        if (choice == 1)
        {
            calculateTuitionFees();
        }
        else
        {
            calculateScholarships();
        }
    }
}
// A method to calculate tuition fees according to the number of credits:
void Finances::calculateTuitionFees()
{
    int credits = getcurrentCredits();
    float tuition = 0;

    if (credits > 12)
    {
        tuition = 2000 * credits;
    }
    else
    {
        tuition = 12000;
    }

    cout << "Your tuition fees are $" << tuition << endl;
}

// Function to calculate scholarship accprding to the GPA and number of credits:

void Finances::calculateScholarships()
{
    float gpa = getcurrentGPA();
    int credits = getcurrentCredits();
    float scholarship = 0;

    if (gpa >= 3.5 && credits >= 12)
    {
        scholarship = 1000;
    }
    else if (gpa >= 3.0 && credits >= 9)
    {
        scholarship = 500;
    }

    cout << "You qualify for a scholarship of $" << scholarship << endl;
}