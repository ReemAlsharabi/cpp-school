#include "DynArray.h"
#include <iostream>
#include <string>
using namespace std;

DynArray::DynArray()
{
    // declaring variables and objects
    sizeOfStuDynArr = 0;
    StuDynArr = new Student*[MAX_ARR];
}
DynArray::~DynArray() // destructor to deallocate memory
{
    for (int i=0; i<sizeOfStuDynArr; i++)
        delete StuDynArr[i];
    delete [] StuDynArr;
}

// function that adds student based on their name, and shifts the StuDynArr in the array
void DynArray::add(Student* s)
{
    int i = 0;
    if (sizeOfStuDynArr == 0) // first time we add an StuDynArr
    { 
        StuDynArr[i] = s;
        sizeOfStuDynArr += 1;
        return;
    }
        
    while (i < sizeOfStuDynArr && StuDynArr[i]->lessThan(s)) //find the position where to add student
    {
        i++;
    }  

    if (i > sizeOfStuDynArr) //student name is greater that name we have. Then add at the end
    {
        StuDynArr[i] = s;
        sizeOfStuDynArr += 1;    
    }
    else // the student should be added before the end of the StuDynArr
    {
	 
        for (int j = sizeOfStuDynArr ; j > i ;j--)
        {
    
        StuDynArr[j] = StuDynArr[j-1];
        }
        StuDynArr[i] = s;
        sizeOfStuDynArr += 1;    
    }
}

bool DynArray::find(string num, Student** stu) //find the student with the number indicated in the num parameter
{
    bool found = false;
	*stu = NULL;
    for (int i=0; i<sizeOfStuDynArr; i++)
    {
        if (StuDynArr[i]->getStuNumber() == num)
        {
            *stu=StuDynArr[i]; //assign the found element to stu parameter
			
            found = true;
			break; // you were missing the break . It was going through all elements
        }
        else
            found = false;
    }
    return found;

}

void DynArray::print() // printing the array elements
{
    for (int i=0; i < sizeOfStuDynArr; i++)
    {
		if (StuDynArr[i] != NULL )
        {
            cout << endl << "--------------------------------------------------------------\n" << endl;
			StuDynArr[i]->print();
        }
    }
    cout << endl << "--------------------------------------------------------------\n" << endl;
}