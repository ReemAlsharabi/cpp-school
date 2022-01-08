#include "Course.h"
#include <string>
#include <iostream>
using namespace std;

Course::Course() // default constructor that sets all data members to default values
{
    id = 0;
    subject = "";
    code = "";
    section = ' ';
    term = "";
    instructor = "";
}
Course::Course(int courseId, string courseSubject, string courseCode, char courseSection, string courseTerm, string courseInstructor) //overloaded constructor
{
    id = courseId;
    subject = courseSubject;
    code = courseCode;
    section = courseSection;
    term = courseTerm;
    instructor = courseInstructor;
}
int Course::getCourseId() //getter function for the course id
{
    return id;
}
string Course::getCourseCode() //function that concatenates the course subject and code
{
    string fullCode = subject + code;
    return fullCode;
}

bool Course::lessThan(Course* otherCourse) //function that compares the course on the left-hand side with the course passed in as the parameter
{
    bool found;
    if (this->subject < otherCourse->subject) //order by subject
        found = true;
    else if (this->subject == otherCourse->subject)
    {
        if (this->code < otherCourse->code) //if the two subjects are the same, order by course code
            found = true;
        else if (this->code == otherCourse->code)
        {
            if (this->term < otherCourse->term) // if the two course codes are the same, order by term
                 found = true;
            else if (this->term == otherCourse->term)
            {
                if (this->section < otherCourse->section) //if the two terms are the same, order by section
                 found = true;
            }
        }
    }
    else
        found = false;
    return found;
}

void Course::print() //function that prints to the screen all the course information
{
    cout << "Course ID: " << id << endl;
    cout << "Course subject: " << subject << endl;
    cout << "Course code: " << getCourseCode() << endl;
    cout << "Course section: " << section << endl;
    cout << "Course term: " << term << endl;
    cout << "Course instructor: " << instructor << endl;
}
