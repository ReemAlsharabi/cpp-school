#ifndef DYNARRAY_H
#define DYNARRAY_H
#include <string>
#include "Student.h" //including the classes we will use here
#define MAX_ARR 64 // max array size
class DynArray
{
    // data members
    private:
        Student** StuDynArr; // declaring the Student pointers array
        int sizeOfStuDynArr; // declaring the size of studentdynamic array
    // methods
    public:
        DynArray(); // default constructor
        ~DynArray(); // destructor
        void print();
        void add(Student*); // add function 
        // function that searches the array to find the student with the number indicated in the num parameter and returns the corresponding student in the Student parameter
        bool find(string, Student**); 
};
#endif