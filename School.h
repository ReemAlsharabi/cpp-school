#ifndef SCHOOL_H
#define SCHOOL_H
//including the classes we will use here
#include "DynArray.h"
#include "StatArray.h"
#include "Taken.h"
class School
{
  // data members
  private:
    string schoolName; // school name
    DynArray stuArr; // DynArray object that stores the collection of all students in the school
    StatArray courseArr; // StatArray object that stores the collection of all courses in the school
    Taken *takenArr[MAX_ARR]; //  statically allocated array of Taken object pointers that stores the collection of student-course pairs
    int takenElements; // the number of elements in the Taken collection
    
  // methods
  public:
    School(); // default constructor
    School(string); // overloaded constructor
    ~School(); // destructor
    void addStu(Student*); // adds the given student to the student collection
    void addCourse(Course*); //  adds the given course to the course collection
    void addTaken(string, int, string); // add the new object to the Taken collection
    void printStudents(); // function that prints all the students in the student collection
    void printCourses(); // function that prints all the courses in the course collection
    void printTaken(); //  function that prints all the Taken objects in the collection
    //  function that prints the full course information for every course taken by the given student, along with the grade earned by the student in that course
    void printTakenByStu(string); 
    };
#endif