#ifndef _TAXOFFICER_
#define _TAXOFFICER_
#include "Cafe.h"
#include "Shop.h"
#include "Theatre.h"

class TaxOfficer: public Visitor
{
public:
	TaxOfficer() {};
	~TaxOfficer() {};

	void visit(Cafe& b)
	{
		cout << "Tax officer: ";
		cout << "This cafe needs to pay taxes." << endl;
		double a = b.payTaxes();
		cout << "I get $" << a << " from them." << endl;
		collectedMoney += a;
	}
	void visit(Shop& b)
	{
		cout << "Tax officer: ";
		cout << "This shop needs to pay taxes." << endl;
		double a = b.payTaxes();
		cout << "I get $" << a << " from them." << endl;
		collectedMoney += a;
	}
	void visit(Theatre& b)
	{
		cout << "Tax officer: ";
		cout << "This theatre needs to pay taxes." << endl;
		double a = b.payTaxes();
		cout << "I get $" << a << " from them." << endl;
		collectedMoney += a;
	}

	void moneyCollected()
	{
		cout << "Tax officer: ";
		cout << "Today I've collected $" << collectedMoney << endl;
	}

private:
	double collectedMoney = 0;

};

#endif //_TAXOFFICER_