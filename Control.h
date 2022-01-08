#ifndef CONTROL_H
#define CONTROL_H
//including the classes we will use here
#include "School.h"
#include "View.h"

class Control
{
// methods
  public:
  	Control(); // default constructor
	~Control();
  	void launch(); // function that implements the program control flow
  	void initStudents(School* sch); // member function that initializes the students contained in the school
  	void initCourses(School* sch); // member function that initializes the courses contained in the school

// data members
  private:
  	View view; // View object
	School* school; // School object
};

#endif