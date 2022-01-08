#include "Student.h"
#include <string>

Student::Student() //default constructor that sets all data members to default values
{
    number = "";
    name = "";
    majorPgm = "";
    gpa = 0.0;
}
Student::Student(string stuNumber, string stuName, string stuMajor, float stuGpa) //overloaded constructor
{
    number = stuNumber;
    name = stuName;
    majorPgm = stuMajor;
    gpa = stuGpa;
}
void Student::setStuNumber(string id) //setting the student id
{
    number = id;
}
string Student::getStuNumber() //getting the student id
{
    return number;
}
void Student::setStuName(string stuName) //setting the student name
{
    name = stuName;
}
string Student::getStuName() //getting the student name
{
    return name;
}
void Student::setStuMajorPgm(string stuMajor) //setting the student major program
{
    majorPgm = stuMajor;
}
string Student::getStuMajorPgm() //getting the student major program
{
    return majorPgm;
}
void Student::setStuGpa(float stuGpa) //setting the student gpa
{
    gpa = stuGpa;
}
float Student::getStuGpa()  //getting the student gpa
{
    return gpa;
}

bool Student::lessThan(Student* stu) //a function that compares the student on the left-hand side with the student passed in as the parameter
{
    bool lessThan = false;
    if (this->name < stu->name)
        lessThan = true;
    else
        lessThan = false;
    return lessThan;
}


void Student::print() //function that prints to the screen all the student information
{
	cout << "Student number: " << number << endl;
    cout << "Student name: " << name << endl;
    cout << "Student major: " << majorPgm << endl;
    cout << "Student gpa: " << gpa << endl;
}
