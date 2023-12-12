# University-Project

----------------------------------------------------------
1. Create a class hierarchy to be used in a university setting.
   
The classes are as follows:

➢ The base class is Person.  --->  The class should have 3 data members: personID (integer), firstName(string), and lastName(string).
The class should also have a static data member called nextID which is used to assign a unique ID number to each object created (personID).
All data members must be private.

 Create the following member functions:  
 • Accessor functions to allow access to first name and last name (updates and retrieval).  These functions should be public.  
 • Create a getID function to retrieve the personID of the person.  This function should be public. The user of the class or any derived class should not have the ability to update personID.   
 • Create a constructor with two arguments (first name and last name) with default values. 
 • Create a public member function Print to display information stored in the object. 
 • Make this class an abstract class.   

 ➢ Create the Student class as a derived class from the Person class.  ---> This class should have two additional data members to keep track of a student’s GPA (float) and admission term (string – eg. Fall 2023).   
 
 • Create public accessor functions to allow access to the GPA and admission term. The setGPA function should return true if the value of the GPA is between 0 and 4.0(inclusive) and false otherwise.  Set the GPA to zero if an invalid value is provided.  
 • Override the function Print to print the student information.  
 • Create a constructor that takes in four arguments with default values (first name, last name, admission term, and GPA).
 
-------------------------------------------------------------
2. Create an application that allows a user to do the followings:
➢ Enter data for as many students as needed.
➢ Print a roster of the students and their information.
➢ Search by name or student ID (PersonID) and display student info (name, GPA and Admission term).    Page 2 of 2
--------------------------------------------------------------
3. The application should:
➢ Use C++ vectors as the main data structure.
➢ Have a menu that the user can select items from

--------------------------------------------------------------
Make sure you include the preprocessor directives (#ifndef, #define, #endif) to prevent a header file from being included (#include) multiple times.  Separate the class interface from the class implementation.         
