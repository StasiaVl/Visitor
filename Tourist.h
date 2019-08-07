#ifndef _TOURIST_
#define _TOURIST_
#include "Cafe.h"
#include "Shop.h"
#include "Theatre.h"
#include <string>

class Tourist: public Visitor
{
public:
	Tourist() 
	{
		num += 1;
		name = "Tourist" + to_string(num);
	};
	~Tourist() {};

	void visit(Cafe& b)
	{
		cout << name.c_str() << ": ";
		cout << "I want to buy a cookie in this cafe" << endl;
		if (b.sellCookie())
			cout << "Yum!" << endl;
		else
			cout << "They have no cookies :c" << endl;
	}
	void visit(Shop& b)
	{
		cout << name.c_str() << ": ";
		cout << "I want to buy something here!" << endl;
		if (b.sellSmt())
			cout << "Such a nice thing!" << endl;
		else
			cout << "They have nothing :c" << endl;
	}
	void visit(Theatre& b)
	{
		cout << name.c_str() << ": ";
		cout << "I will visit a theatre." << endl;
		b.show();
	}

private:
	static int num;
	string name;

};

#endif //_TOURIST_