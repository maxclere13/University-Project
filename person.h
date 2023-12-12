#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person {
private:
    static int nextID;
    int personID;
    string firstName;
    string lastName;

public:
    Person(string first = "", string last = ""); // Constructor with default values
    string getFirstName() const;                 // Accessor for first name
    string getLastName() const;                  // Accessor for last name
    int getID() const;                           // Accessor for person ID

    virtual void Print() const = 0;              // Function to print person information
    virtual ~Person() = 0;                       // Virtual destructor to make class abstract
};

#endif