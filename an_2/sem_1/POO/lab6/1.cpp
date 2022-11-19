/*
Creați o clasă abstractă Country care să aibă
3 metode diferite. Realizați trei clase care
să moștenească clasa Country și să implementeze
cele 3 metode pure virtual function.
*/

#include <iostream>
#include <string.h>

using namespace std;


class Country{
public:
	int population;
	string capital;

	virtual void imn() = 0;
	virtual int getPopulation() = 0;
	virtual string getCapital() = 0;

};

class Democracy : public Country{
public:
	int population;
	string capital;

	Democracy(){
		this->population = 1000;
		this->capital = "Paris";
	}

	void imn(){
		cout << "Desteapta-te, Pierre!" << endl;
	}

	int getPopulation(){
		return this->population;
	}

	string getCapital(){
		return this->capital;
	}

};


class Monarchy : public Country{
public:
	int population;
	string capital;

	Monarchy(){
		this->population = 3000;
		this->capital = "Fadar";
	}

	void imn(){
		cout << "Desteapta-te, Elizabeto!" << endl;
	}

	int getPopulation(){
		return this->population;
	}

	string getCapital(){
		return this->capital;
	}
};


class Dictatorship : public Country{
public:
	int population;
	string capital;

	Dictatorship(){
		this->population = 5000;
		this->capital = "Moscow";
	}

	void imn(){
		cout << "Desteapta-te, Ivan!" << endl;
	}

	int getPopulation(){
		return this->population;
	}

	string getCapital(){
		return this->capital;
	}
};



int main(){

	Monarchy anglia;
	Democracy romania;
	Dictatorship rusia;

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