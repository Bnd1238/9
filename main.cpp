#include "nas.h"
int main()
{
	/*int w;
	cin >> w;
	Apartament b;
	b.SetWorth(w);
	b.print();
	Car c;
	c.SetWorth(b.GetWorth());
	c.print();
	CountryHouse d(w);
	d.print();*/
	Property* mas [7];
	/*Apartament o,d,t;
	Car c, p;
	new CountryHouse sh, sm;*/
	mas[0] = new Apartament;
	mas[1] = new Apartament;
	mas[2] = new Apartament;
	mas[3] = new Car;
	mas[4] = new Car;
	mas[5] = new CountryHouse;
	mas[6] = new CountryHouse;
	for (int i = 0; i < 7; ++i)
	{
		/*int k;
		cin >> k;
		mas[i]->SetWorth(k);*/
		mas[i]->SetWorth(1939+i);
	}
	for (int i = 0; i < 7; ++i)
	{
		cout<<i<<" "<<mas[i]->GetWorth()<<" "<<mas[i]->nalog()<<endl;
		delete mas[i];
	}
	
}
