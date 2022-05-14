#ifndef CH
#define CH
#include <iostream>
#include <vector>

using namespace std;
class Property
{
protected:
	int worth;
public:
	Property(int w=0) :worth(w)
	{
		cout << "open P " << this << endl;
	}
	virtual ~Property()
	{
		cout << "close P " << this << endl;

	}
	int GetWorth();
	void SetWorth(int);
	virtual double nalog()=0;
	void print();
};

class Apartament : public Property
{
public:
	Apartament(int w=0 ) :Property{w}
	{
		cout << "open A" << this << endl;
	}
	~Apartament()  
	{
		cout << "close A " << this << endl;
	}
	double nalog()override;
};
class Car : public Property
{
public:
	Car(int w=0) :Property(w)
	{
		cout << "open C " << this << endl;
	}
	~Car()
	{
		cout << "close C " << this << endl;
	}
	double nalog()override;
};
class CountryHouse : public Property
{
public:
	CountryHouse(int w=0) :Property{ w }
	{
		cout << "open H " << this << endl;
	}
	~CountryHouse()
	{
		cout << "close H " << this << endl;
	}
	double nalog()override;
};
#endif

