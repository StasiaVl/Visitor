#ifndef _THEATRE_
#define _THEATRE_
#include "Building.h"

class Theatre : public Building
{
public:
	Theatre() : money(0), ticketsSold(0) {};
	~Theatre() {};

	void accept(Visitor &v)
	{
		v.visit(*this);
	}

	void show()
	{
		cout << "Today, The Nutcracker is shown" << endl;
		++ticketsSold;
		money += 100;
	}
	double payTaxes()
	{
		double t = money*0.1;
		money -= t;
		return t;
	}

	void getVisitors()
	{
		cout << "Today we have sold " << ticketsSold << " tickets!" << endl;
	}

private:
	double money;
	int ticketsSold;
};

#endif //_THEATRE_