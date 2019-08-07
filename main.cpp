#include <iostream>
using namespace std;
#include "Cafe.h"
#include "Shop.h"
#include "Theatre.h"
#include "Tourist.h"
#include "TaxOfficer.h"

int Tourist::num = 0;

int main()
{
	const int numOfTourists = 5;
	Tourist tourists[numOfTourists];
	Building *town[] = { new Shop(), new Cafe(), new Theatre()};
	
	for (int i = 0; i < numOfTourists; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			town[j]->accept(tourists[i]);
		}
		cout << endl;
	}
	TaxOfficer officer;
	for (int j = 0; j < 3; ++j)
	{
		town[j]->accept(officer);
	}
	cout << endl;
	officer.moneyCollected();
	
	return 0;
}