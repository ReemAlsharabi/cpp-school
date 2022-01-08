#ifndef TAKEN_H
#define TAKEN_H
#include <string>
//including the classes we will use here
#include "Course.h"
#include "Student.h"

class Taken
{
  // data members
    private:
      Student *stuPtr; //pointer to object in class Student from the same type (Student)
      Course *coursePtr; //pointer to object in class Course from the same type (Course)
      string grade;
  // methods
    public:
      Taken(); //default constructor
      Taken(Student*, Course*, string); //overloaded constructor 
      Student* getStuPtr(); // getter function for the Student pointer
      Course* getCoursePtr(); // getter function for the Course pointer
      void print(); // function to print the student's name with the concatenated course code and the grade earned
};
#endif