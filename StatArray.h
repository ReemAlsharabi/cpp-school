#ifndef STATARRAY_H
#define STATARRAY_H
#include <string>
#include "Course.h" //including the classes we will use here
#define MAX_ARR 64 // max array size

//collection class made to statically allocated store object pointers of course elements
class StatArray
{
  // data members
  public:
    void add(Course*); //function that takes a Course pointer as parameter and adds it to the array in its correct place
    void print() ;
    // function that searches the array to find the course with the id indicated in the id parameter and returns the corresponding course in the course parameter
    bool find(int , Course**) ; 
    StatArray(); // default constructor
    ~StatArray(); // destructor
  //methods
  private:
    Course* elements[MAX_ARR]; // static array declaration
    int size; // stat arr size
};
#endif