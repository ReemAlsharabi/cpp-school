#include <iostream>
using namespace std;
#include <string>
#include "Control.h"

Control::Control()
{
  
}

void Control::launch()
{
  // declaring variables
  int choice = 0;
  int courseId;
  string stuNum, grade;

  // declaring objects
  school = new School("Effat Uni"); 

  //calling methods
  initStudents(school);
  initCourses(school);

  while (1)
  {
    // display menu in View class
    view.showMenu(choice);
    
    cout << endl;

    if (choice == 0)
    {
        cout << "Thank you for using our program." << endl;
        break;
    }

    // print out all the students in the school
    if (choice == 1)
    {
      school->printStudents();
    }

    // print out all the courses in the school
    if (choice == 2)
    {
      school->printCourses();
    }

    // print out all the Taken objects in the school's collection
    if (choice == 3)
    {
      school->printTaken();
    }

    // print out all the courses taken by a specific student, and the grades earned
    if (choice == 4)
    {
      // read from the user the student number
      view.printStr("Enter your Student Number: ");
      view.readStr(stuNum);
      school->printTakenByStu(stuNum);
    }
    
    // add a new Taken object for a specific student and course
    if (choice == 5)
    {
      // read from the user the student number
      view.printStr("Enter your Student Number: ");
      view.readStr(stuNum);
      // read from the user the course id
      view.printStr("Enter your Course ID: ");
      view.readInt(courseId);
      // read from the user the grade earned
      view.printStr("Enter your Grade: ");
      view.readStr(grade);
    // pass the values to addTaken method in School class
      school->addTaken(stuNum, courseId, grade);
    }
  }
}

void Control::initStudents(School *sch) // initialize the students contained in the school
{

  sch->addStu(new Student("S20101234", "Tala", "CS", 4.0));
  sch->addStu(new Student("S20111234", "Laila", "ECE", 3.90));
  sch->addStu(new Student("S20105432", "Noor", "SCM", 3.50));
  sch->addStu(new Student("S20110987", "Dana", "CS", 3.25));

}

void Control::initCourses(School *sch) // initialize the courses contained in the school
{
  sch->addCourse(new Course(1000, "MATH", "101", '1', "Spring2020", "Dr. Tayeb"));
  sch->addCourse(new Course(1230, "MATH", "201", '1', "Fall2021", "Dr. Mousa"));
  sch->addCourse(new Course(1234, "CS", "2111", '3', "Fall2021", "Dr. Zain"));
  sch->addCourse(new Course(2310, "CS", "1131", '2', "Spring2022", "Dr. Akila"));
}

Control::~Control() // destructor to delete the new School object
{
  delete school;
}