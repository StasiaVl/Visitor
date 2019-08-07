#ifndef _CAFE_
#define _CAFE_
#include "Building.h"

class Cafe: public Building
{
public:
	Cafe() : money(1000), visitors(0), cookies(3) {};
	~Cafe() {};

	void accept(Visitor &v) 
	{
		v.visit(*this);
		++visitors;
	}

	bool sellCookie()
	{
		if (cookies != 0)
		{
			--cookies;
			money += 10;
			return true;
		}
		else return false;
	}
	double payTaxes()
	{
		double t = money*0.2;
		money -= t;
		return t;
	}

	void getVisitors()
	{
		cout << "Today we have accepted " << visitors << " visitors!" << endl;
	}

private:
	double money;
	int visitors;
	int cookies;
};

#endif //_CAFE_