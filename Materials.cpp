#include "Materials.h"
#include <iostream>

using namespace std;

// the course type method:

void Materials::course_type() {
    cout << "Which type of courses do you study ? " << endl
        << "1- Science" << endl
        << "2- Maths" << endl
        << "3- Programming" << endl;
    cin >> choice1;
   material_type(choice1);
        // Call the material_type() function with the 
        //chosen course type to continue the material selection process
    
}

// "material type" method function:

Materials::Materials()
{
    //code
}
int Materials::material_type(int choice) {
    cout << "What kind of materials do you want ? " << endl
        << "1- TextBooks" << endl
        << "2- Tutorial Videos" << endl;
    cin >> kind;
    if (choice == 1) {
        if (kind == 1)
            cout << "Here are Science textbooks that may help you " << endl
            << "Physics for Scientists and Engineers by Serway and Jewett - "
            "10th edition"
            << endl
            << "Chemistry : The Central Science by Brown and Murphy - 14th "
            "edition"
            << endl
            << "Campbell Biology by Urry, Minorsky and "
            "Reece - 11th edition"
            << endl;
        else if (kind == 2)
            cout << "Here are some Science videos that may help you " << endl
            << "1. Khan Academy - Organic Chemistry"
            << " Link: https://www.khanacademy.org/science/organic-chemistry"
            << endl
            << "2. edX - Introduction to Biology - The Secret of Life" << endl
            << "Link: https://www.edx.org/course/"
            "introduction-to-biology-the-secret-of-life" << endl;

    }
    else if (choice == 2) {
        if (kind == 1)
            cout << "Here are some Maths textbooks that may help you " << endl
            << "1. Calculus by James Stewart- 8th edition" << endl
            << "2. Linear Algebra and Its Applications by Gilbert Strang - "
            "4th edition "
            << endl
            << "3. Introduction to Probability by Joseph K. Blitzstein - 1st "
            "edition"
            << endl
            << "4. Discrete Mathematics and Its Applications by Kenneth H. "
            "Rosen- 7th edition "
            << endl;
        else if (kind == 2)
            cout << "Here are some Maths tutorials that might help you " << endl
            << "Mathematics for Computer Science by MIT OpenCourseWare" << endl
            << "Link: "
            "https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-fall-2010/"
            << endl;
    }
    else if (choice == 3) {
        if (kind == 1) {
            cout << " Here are some popular programming language textbooks:" << endl
                << "1. C++ Primer by Lippman, Lajoie, and Moo- 5th edition "
                << endl
                << "2. Effective Java by Joshua Bloch - 3rd edition" << endl
                << "3. Learning Python by Mark Lutz- 5th edition" << endl
                << "4. JavaScript: The Definitive Guide by David Flanagan - 7th "
                "edition"
                << endl;
        }
        else if (kind == 2)
            cout << "Here are some Programming Tutorials that may help you :"
            << endl
            << "1. MIT OpenCourseWare - Introduction to Computer "
            "Science and Programming Using Python"
            << endl
            << "Link: "
            "https://ocw.mit.edu/courses/6-0001-introduction-to-"
            "computer-science-and-programming-in-python-fall-2016/"
            << endl
            << "2. Harvard University - CS50: Introduction to "
            "Computer Science"
            << endl
            << "Link: "
            "https://online-learning.harvard.edu/course/"
            "cs50-introduction-computer-science"
            << endl;

    }
    return 0;
}

