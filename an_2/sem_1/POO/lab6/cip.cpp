/*
Creați o clasă abstractă Country care să aibă 3 metode diferite. Realizați trei clase care
să moștenească clasa Country și să implementeze cele 3 metode pure virtual function.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Country
{
public:
	virtual void numberOfPeople()
	{
		cout << "Parent Class {numberOfPeople}";
	}
	virtual void getCountryName()
	{
		cout << "Parent Class {countryName}";
	}
	virtual void getPresident()
	{
		cout << "Parent Class {president}";
	}
};

class FullPresidential : public Country
{
public:

	FullPresidential()
	{
		this->numberOfPeople = 331000000;
		this->president = "Joe Biden";
		this->countryName = "United States";
	}

    void numberOfPeople()
	{
		cout << "Number of people 331000000";
	}
	void getCountryName()
	{
		cout << "Number of people 331000000";
	}
	void getPresident()
	{
		cout << "Number of people 331000000";
	}
};

class SemiPresidential : public Country
{
public:

	SemiPresidential()
	{
		this->numberOfPeople = 19000000;
		this->president = "Klaus Iohannis";
		this->countryName = "Romania";
	}

	void numberOfPeople()
	{
		cout << "Number of people 331000000";
	}
	string getCountryName()
	{
		cout << "Number of people 331000000";
	}
	string getPresident()
	{
		cout << "Number of people 331000000";
	}
};

class ParliamentaryRepublics : public Country
{
public:

	ParliamentaryRepublics()
	{
		this->numberOfPeople = 10300000;
		this->president = "Marcelo Rebelo de Sousa";
		this->countryName = "Portugal";
	}

	int numberOfPeople()
	{
		cout << "Number of people 331000000";
	}
	string getCountryName()
	{
		cout << "Number of people 331000000";
	}
	string getPresident()
	{
		cout << "Number of people 331000000";
	}
};

int main()
{

	FullPresidential anglia;
	SemiPresidential romania;
	ParliamentaryRepublics rusia;

	anglia.imn();
	cout << anglia.getCapital() << endl;
	cout << anglia.getPopulation() << endl;

	romania.imn();
	cout << romania.getCapital() << endl;
	cout << romania.getPopulation() << endl;

	rusia.imn();
	cout << rusia.getCapital() << endl;
	cout << rusia.getPopulation() << endl;

	return 0;
}