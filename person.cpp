#include <iostream>
#include "person.h"
#include <string>

using namespace std;

int Person::nextID = 1;

Person::Person(string first,string last):firstName(first),lastName(last),personID(nextID++) {}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

int Person::getID() const {
    return personID;
}

void Person::Print() const {
    cout << "ID: " << personID << ", Name: " << firstName << " " << lastName << endl;
}

Person::~Person() = default;
