#ifndef CLASS1_H
#define CLASS1_H
#include "Class0.h"

class Class1 : virtual public Class0 {
protected:
	void fillList();
public:
	Class1() {};
};

#endif