#include "StatArray.h"
#include <iostream>
#include <string>
using namespace std;

StatArray::StatArray() // default constructor
{
    size = 0; // initialize data mambers
}

StatArray::~StatArray() // destructor
{
    for (int i = 0; i < size; ++i) // delete all array elements
      delete elements[i];
}
// comments
// add function that takes a Course pointer as parameter
void StatArray::add(Course *coursePtr)
{
  if (size < MAX_ARR)
  {
    int i=0;
    for (; i < size; i++)
    {
      if (coursePtr->lessThan(elements[i])) // comparison
      {
        break;
      }
    }

    for (int j = size; j > i; j--) 
    {
      elements[j] = elements[j - 1]; //  shift the elements 
    }

    elements[i] = coursePtr; // add the given course to the array in its correct place
    size++; // increase the size
  }
  else
    cout << "No space to add courses." << endl;
  
}

bool StatArray::find(int id, Course** c) //find the Course with the id indicated in the id parameter
{
	*c = NULL; //Akila
    bool found = false; // boolean variable to be returned
    for (int i=0; i < size ; i++)
    {
        if (elements[i]->getCourseId() == id) // check if the id exists
        {
			      *c = elements[i]; //assign the found element to c (parameter)
			      found = true;
            break;
        }
        else
            found = false;
    }
	
    return found;
}

void StatArray::print() // printing the array elements
{
    for (int i=0; i < size ; i++)
    {
        cout << endl << "--------------------------------------------------------------\n" << endl;
        elements[i]->print();
    }
    cout << endl << "--------------------------------------------------------------\n" << endl;
}