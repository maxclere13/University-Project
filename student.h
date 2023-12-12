#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>

using namespace std;

class Student : public Person {

private:
    float GPA{};
    string admissionTerm;

public:
    explicit Student(string first = "", string last = "", string term = "Fall 2023", float gpa = 0.0);
    bool setGPA(float gpa);            // Function to set GPA with validation
    float getGPA() const;              // Accessor for GPA
    string getAdmissionTerm() const;   // Accessor for admission term
    void Print() const;                // Override Print function for Student class
};

#endif
