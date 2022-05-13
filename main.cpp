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
	Apartament o,d,t;
	Car c, p;
	CountryHouse sh, sm;
	mas[0] = &o;
	mas[1] = &d;
	mas[2] = &t;
	mas[3] = &c;
	mas[4] = &p;
	mas[5] = &sh;
	mas[6] = &sm;
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
	}
	
}