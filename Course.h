#ifndef COURSE_H
#define COURSE_H
#include <string>

class Course // class name
{
  //attributes
    private:
        int id; // the unique identifier of the course
        string subject; // the subject of the course
        string code; // the course code
        char section; // the course section
        string term; // the term when the course was offered
        string instructor; // the course instructor

    //methods
    public:
        bool lessThan(Course*); // function that compares courses
        string getCourseCode(); // concatenates the course subject and code
        void print(); // prints all the course information
        Course(); // default constructor
        Course(int, string, string, char, string, string); // overloaded constructor
        int getCourseId(); // getter function for the course id
};
#endif