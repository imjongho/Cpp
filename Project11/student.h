/****************************************************************
 * The interface file for the Student class 		 	  		  *
 ****************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

// »ó¼Ó
class Student : public Person {
private:
	double gpa;
public:
	Student(string name, double gpa);
	virtual void print() const;
};
#endif