#include "Person.h"

// Constructor for initializing the members:

Person::Person()
{
    //code
}

Person::Person(string first, string last, string user, string mail, string pass) {
    firstName = first;
    lastName = last;
    username = user;
    email = mail;
    password = pass;
}

// Getters to access the private members
string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

string Person::getUsername() const {
    return username;
}

string Person::getEmail() const {
    return email;
}

string Person::getPassword() const {
    return password;
}

// Setters for modifying private member variables
void Person::setFirstName(string first) {
    firstName = first;
}

void Person::setLastName(string last) {
    lastName = last;
}

void Person::setUsername(string user) {
    username = user;
}

void Person::setEmail(string mail) {
    email = mail;
}

void Person::setPassword(string pass) {
    password = pass;
}


