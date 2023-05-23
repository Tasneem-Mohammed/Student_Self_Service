#include "Help.h"
#include "Materials.h"
#include <iostream>
#include <string>

using namespace std;

Help::Help()
{
    //code
}

void Help::help() {
    Materials m;
    cout << "How can I help you with?" << endl;
    cout << "1. Materials" << endl;
    cout << "2. Academic Advising" << endl;
    cout << "Enter your choice: 1 or 2 ";
    cin >> choice;
    if (choice == 1) {
       m.course_type();
    }
    else if (choice == 2) {
        Advising();
    }
    else {
        cout << "Invalid choice. Please try again." << endl;
        help();
    }
}

void Help::Advising() {
    string advisor_names[5] = { "Dr Mohammed", "Dr Jane", "Dr Michael", "Dr Samantha", "Dr David" };
    cout << "Which Professor is your academic advisor?" << endl;
    for (int i = 0; i < 5; i++) {
        cout << advisor_names[i] << endl;
    }
    cin >> answer2;
    cout << "Your academic advisor email : " << answer2 + "@zewailcity.edu.eg" << endl;
}