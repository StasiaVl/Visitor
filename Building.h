#ifndef _BUILDING_
#define _BUILDING_
#include "Visitor.h"
#include <iostream>
using namespace std;

class Building
{
public:
	//Any building in the town must be able to accept a visitor
	virtual void accept(Visitor &v)
	{
		v.visit(*this);
	}
};

#endif //_BUILDING_