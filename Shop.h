#ifndef _SHOP_
#define _SHOP_
#include "Building.h"

class Shop : public Building
{
public:
	Shop() : money(3000), visitors(0), goods(50) {};
	~Shop() {};

	void accept(Visitor &v)
	{
		v.visit(*this);
		++visitors;
	}

	bool sellSmt()
	{
		if (goods != 0)
		{
			--goods;
			money += 50;
			return true;
		}
		else return false;
	}
	double payTaxes()
	{
		double t = money*0.3;
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
	int goods;
};

#endif //_SHOP_