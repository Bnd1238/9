#include "nas.h"
int Property::GetWorth()
{
	return worth;
}
void Property::SetWorth(int a)
{
	worth = a;
}

void Property::print()
{
	cout << worth << " " << nalog()<<endl;
}

double Apartament::nalog()
{
	return worth*1.0/1000;
}
double Car::nalog()
{
	return worth*1.0/200;
}
double CountryHouse::nalog()
{
	return worth*1.0/500;
}
