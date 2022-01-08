#include <string>
#include "Taken.h"
#include <iostream>
using namespace std;

Taken::Taken() //default constructor
{
    grade = "";
    stuPtr = NULL;
    coursePtr = NULL;
}

Taken::Taken(Student* mystuPtr, Course* mycoursePtr, string myGrade) //overloaded constructor
{
    // initializing  data members
    grade = myGrade;
    stuPtr = mystuPtr;
    coursePtr = mycoursePtr;
}

// getter function for the Student pointer
Student* Taken::getStuPtr()
{
    return stuPtr;
}

// getter function for the Course pointer
Course* Taken::getCoursePtr()
{   
    return coursePtr;
}

// function to print the student's name with the concatenated course code and the grade earned
void Taken::print()
{
	if (stuPtr != NULL) // check if there are any students
	{
        cout << endl << "--------------------------------------------------------------\n" << endl;
		cout << "Student " << stuPtr->getStuName() << ", took the course: "; // print the student name
		if (coursePtr != NULL) // check if there are any courses
		{
			cout << coursePtr->getCourseCode() << ", and got: " << grade <<endl; // print the course code and earned grade
		}
        else
            cout << endl << "No Data Found." << endl; // error checking and handling
	}
    else
        cout << endl << "No Data Found." << endl; // error checking and handling
}

