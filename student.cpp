#include <iostream>
#include "student.h"
#include <string>

using namespace std;

Student::Student(string first,string last,string term,float gpa)
: Person(first, last), admissionTerm(term)
{
    setGPA(gpa);
}

float Student::getGPA() const {
    return GPA;
}
bool Student::setGPA(float gpa) {
    if (gpa >= 0.0 && gpa <= 4.0) {
        GPA = gpa;
        return true;
    }
    else {
        GPA = 0.0;
        return false;
    }
}

string Student::getAdmissionTerm() const {
    return admissionTerm;
}

void Student::Print() const {
    Person::Print();
    cout << "Admission Term: " << admissionTerm << ", GPA: " << GPA << endl;
}
