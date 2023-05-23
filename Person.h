#pragma once
#include<string>
#include <iostream>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string username;
    string email;
    string password;

public:
    // Constructor
    Person();
    Person(string first, string last, string user, string mail, string pass);
    // Getters
    string getFirstName() const;

    string getLastName() const;

    string getUsername() const;

    string getEmail() const;

    string getPassword() const;

    // Setters
    void setFirstName(string first);

    void setLastName(string last);

    void setUsername(string user);

    void setEmail(string mail);

    void setPassword(string pass);
};



