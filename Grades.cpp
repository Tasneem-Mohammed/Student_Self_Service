#include "Grades.h"
Grades::Grades()
{
	//code
}
//some setters & getters
void Grades::setcurrentGPA(float cGPA) {
	currentGPA = cGPA;
}

void Grades::settargetGPA(float tGPA) {
	targetGPA = tGPA;
}

void Grades::settotalGPA(float total) {
	totalGPA = total;
}

void Grades::setfinalGPA(float fGPA) {
	finalGPA = fGPA;
}

void Grades::setcurrentCredits(int credits) {
	currentCredits = credits;
}

void Grades::settargetCredits(int target) {
	targetCredits = target;
}

void Grades::settotalCredits(int total2) {
	totalCredits = total2;
}

float Grades::getcurrentGPA() {
	return currentGPA;
}

float Grades::gettargetGPA() {
	return targetGPA;
}

float Grades::gettotalGPA() {
	return totalGPA;
}

float Grades::getfinalGPA() {
	return finalGPA;
}

int Grades::getcurrentCredits() {
	return currentCredits;
}

int Grades::gettargetCredits() {
	return targetCredits;
}

int Grades::gettotalCredits() {
	return totalCredits;
}

void Grades::viewGPA() {
	cout << "Your GPA is " << currentGPA << endl;
}
//The target Gpa of the student calculator
float Grades::calculateTargetedGPA() {
	cout << "Enter your current GPA: ";
	cin >> currentGPA;
	cout << "Enter your current credits: ";
	cin >> currentCredits;
	cout << "Enter your target GPA: ";
	cin >> targetGPA;
	cout << "Enter your target credits: ";
	cin >> targetCredits;
	int totalCredits = currentCredits + targetCredits;
	int totalGPA = (currentGPA * currentCredits) + (targetGPA * targetCredits);
	int finalGPA = totalGPA / totalCredits;
	cout << "You need to achieve a GPA: " << finalGPA << endl;
	return finalGPA;
}
// Choices for the Gpa options:
float Grades::GPAInquiries() {
	int GPA_choice;
	cout << "1. View GPA" << endl;
	cout << "2. Calculate targeted GPA" << endl;
	cout << "Enter your choice: ";
	cin >> GPA_choice;
	if (GPA_choice == 1) {
		viewGPA();
	}
	else if (GPA_choice == 2) {
		calculateTargetedGPA();
	}
	else {
		cout << "Invalid choice. Please try again." << endl;
		GPAInquiries();
	}
	return GPA_choice;
}