#include "School.h" //including the classes we will use here
#include <iostream>
using namespace std;

School::School()
{
    // initializing variables
    schoolName = ""; 
    takenElements = 0;
}

School::School(string schName) // overloaded constructor
{
    // initializing variables
    schoolName = schName;
}

School::~School() // destructor to deallocate memory
{
    for (int i=0; i<takenElements; i++)
        delete takenArr[i]; // delete all elements
}

void School::addStu(Student*stu)  // adding the given student to the student collection
{
    stuArr.add(stu);
}

void School::addCourse(Course*c) // adding the given student to the course collection
{
    courseArr.add(c);
}

void School::addTaken(string stuNum, int courseId, string grade)
{
    // declare and initialize objects
    Student* stu1 = NULL;
    Course* c1 = NULL;
    Taken* myTaken;
		
    if (stuArr.find(stuNum, &stu1)) // find the student object with the given student number
    {  
        if (courseArr.find(courseId, &c1)) // find the course object with the given course id
		{
          
            myTaken = new Taken(stu1, c1, grade);//create a new Taken object with the found student and course objects, and with the given grade
            takenArr[takenElements] = myTaken ; // add the new object to the back of the Taken collection
			cout << endl << "Student was added successfully!" << endl;
			
			takenElements++; // increase the array size
        }
        else 
            cout << endl << "Course Not Found." << endl; // error checking and handling
    }
    else
        cout << endl << "Student Not Found." << endl; // error checking and handling
}

void School::printStudents() // print student array elements
{
    stuArr.print(); // using DynArray class method
}

void School::printCourses() // print Course array elements
{
    courseArr.print(); // using StatArray class method
}

void School::printTaken() // print Taken array elements
{
	
    if (takenElements > 0)
    {
        for (int i=0; i<takenElements; i++)
			if (takenArr[i] != NULL)
			{
				takenArr[i]->print(); // using Taken class method
				
			}
        cout << endl << "--------------------------------------------------------------\n" << endl;
	}
    else
        cout << "No Data Found." << endl; // error checking and handling
}

void School::printTakenByStu(string stuNum) // print the full course information for every course taken by the given student
{
    Student *id = NULL; // declare and initialize object
    stuArr.find(stuNum, &id); // find the given student

    if (takenElements > 0) // error checking and handling
    {
        for (int i=0; i<takenElements; i++)
        {
            if(takenArr[i]->getStuPtr() == id) // checking if the given student exists in Taken array
            {
            cout << endl << "--------------------------------------------------------------\n" << endl;
                cout << "Taken by: " << takenArr[i]->getStuPtr()->getStuName() << endl; // access and print student name
                takenArr[i]->getCoursePtr()->print(); // access and print full Course information
                takenArr[i]->print(); // print the course taken and the grade earned
            }
        }
        cout << endl << "--------------------------------------------------------------\n" << endl;
    }
    else
        cout << endl << "No Data Found." << endl; // error checking and handling
}

