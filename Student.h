#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
    //attributes
    private:
        string number; // unique number that identifies the student
        string name; // a name of the student
        string majorPgm; //the major of the student
        float gpa; // gpa of the student

    //methods
    public:
        bool lessThan(Student*); ////function that compares names
        void print(); //prints all the student information
        void setStuNumber(string); //setting the student id
        string getStuNumber(); //getting the student id
        void setStuName(string); //setting the student name
        string getStuName(); //getting the student name
        void setStuMajorPgm(string); //setting the student major program
        string getStuMajorPgm(); //getting the student major program
        void setStuGpa(float); //setting the student gpa
        float getStuGpa();  //getting the student gpa
        Student(); //default constructor
        Student(string, string, string, float); //overloaded constructor
};
#endif