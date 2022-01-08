*******************************************************************************

                        CS1131 FINAL PROJECT

*******************************************************************************



Preamble
-------------------------------------------------------------------------------

This is a program to manage the data for a school with students and courses! It has existing student and courses The user is
presented a menu of operations to select from  (print students, print courses,
print all courses taken, print all courses taken by student, add courses taken
by student, exit). Adding a course taken by a student  requires entering
student number, course ID , and Grade.


# List of Files
--------------------------------------------------------------------------------

# Header Files

* Control.h
* Course.h
* DynArray.h
* School.h
* StatArray.h
* Student.h
* Taken.h
* View.h

# Source Files

* Control.cc
* Course.cc
* DynArray.cc
* School.cc
* StatArray.cc
* Student.cc
* Taken.cc
* View.cc
* ProjectTestDriver.cc




Compile                                   
------------------------------------------------------------------------------

To compile the  program:
* open command prompt
* type in cd "file directory" (the directory in which the files are located)
* type in 'make project'


Execution
-------------------------------------------------------------------------------

to execute the program :
* After compiling the program type in 'project'





Launching and Operating Instructions
-------------------------------------------------------------------------------

After executing the program a menu of operations will appear

(1) Print Students  - will display all student names including their IDs, major,
                      and GPA.

(2) Print courses - will display all course name including their IDs, codes,
                    section, term and instructor.

(3) Print all courses taken - will display the name of student with her course
                              and grade. This operation will only work After
                              adding the student and course names in operation 5.

(4) print courses taken by student - will ask for student number then display
                                     course information and the student name and
                                     grade. This operation will only work After
                                     adding the student and course names in
                                     operation 5.

(5) Add course taken by student -    will ask for student number, course ID and
                                     student grade and then add them.

(0)Exit - Exit the program by entering 0 for "Quit" at the main menu. The server
          will stop execution as well.

* when entering the information asked in the program DO NOT enter a string.
