#ifndef CLASS2_H
#define CLASS2_H
#include "Class0.h"

class Class2 : virtual public Class0 {
protected:
	void printList();
	void sortList();
	Class2() {};
};

#endif