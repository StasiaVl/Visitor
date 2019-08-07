#ifndef _VISITOR_
#define _VISITOR_
#include <iostream>
using namespace std;

class Visitor
{
public:

	//The visitor must be able to visit any building
	virtual void visit(class Building& b)
	{
		cout << "I don't know, what to do here" << endl;
	}
	virtual void visit(class Cafe& b)
	{
		cout << "I don't know, what to do here" << endl;
	}
	virtual void visit(class Shop& b)
	{
		cout << "I don't know, what to do here" << endl;
	}
	virtual void visit(class Theatre& b)
	{
		cout << "I don't know, what to do here" << endl;
	}

};

#endif //_VISITOR_