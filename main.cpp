// Assigment 2
// Student name : Fady Fahmy
// CSCI 373

#include <iostream>
#include <vector>
#include "person.h"
#include "student.h"
#include <string>

using namespace std;

int main() {
    vector<Person*> people;      // Create a vector of pointers to Person objects to store students

    int choice;
    do {

        cout << "\n================ Menu ================\n";
        cout << "Menu:\n";
        cout << "1. Add Student\n";
        cout << "2. Print Roster\n";
        cout << "3. Search by Name or ID\n";
        cout << "4. Quit\n";
        cout << "======================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {
            case 1: {
                string firstName, lastName, admissionTerm;
                float gpa;

                cout <<"Enter first name: ";
                cin >> firstName;
                cout <<"Enter last name: ";
                cin >> lastName;
                cout <<"Enter admission term (ex:Fall 2023): ";
                cin >> admissionTerm;

                while (true) {
                    cout <<"Enter GPA: ";
                    cin >> gpa;

                    if (gpa >= 0.0 && gpa <= 4.0) {    // validate the GPA
                        break;
                    } else {
                        cout << "Invalid GPA !\n " << "Please enter a number between 0.0 and 4.0 !\n";
                    }
                }
                Student* newStudent = new Student(firstName, lastName, admissionTerm, gpa);
                people.push_back(newStudent);

                break;
            }
            case 2:
                cout << "\n================ Roster ================\n";
                for (const Person* person : people) {
                    person->Print();
                    cout << "----------------------------------------\n";
                }
                break;
            case 3: {
                string search;
                cout << "Enter name or ID to search: ";
                cin >> search;

                bool found = false;
                for (const Person* person : people) {
                    if (person->getFirstName() == search || person->getLastName() == search ||
                        to_string(person->getID()) == search) {
                        person->Print();
                        found = true;     // validate the search
                        break;
                    }
                }
                if (!found) {
                    cout << " No matching records found.\n";
                }
                break;
            }
            case 4:
                for (Person* person : people) {
                    delete person; // Clean up allocated memory
                }
                break;
            default:
                cout << "Invalid choice. Please try again.\n"; // validate the choice
        }
    }
    while (choice != 4);

    return 0;
}
