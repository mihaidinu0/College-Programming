/*
Realizați un exemplu legat de cărți în care să implementați:
- Friend class
- Friend function
- Virtual function (see lab 5)
*/

#include <iostream>
#include <string>
using namespace std;


class Serie{
	private:
		string autor;
		int nr_carti;
	public:
		friend class Carte;
		// Chiar daca clasa ManualProgramare nu e friend
		// functiile friend de mai jos au acces
		friend string getAutor();
		friend string getAutor(Serie &s); 
		friend string getTema();

		Serie(string aut, int nr){
			this->autor = aut;
			this->nr_carti = nr;
		}

		string getAutor(Carte &c){
			return c.autor;
		}
		string getAutor(Serie &s){
			return s.autor;
		}
		string getAutor(){
			return this->autor;
		}
		
		int getNrCarti(Serie &s){
			return s.nr_carti;
		}

		int getNrCarti(){
			return this->nr_carti;
		}


};

class Carte{
	public:
		string autor;
		string tema;
		int nr_pagini;
		virtual string getAutor(){
			return this->autor;
		}
		virtual string getTema(){
			return this->tema;
		}

		virtual string getAutor(Carte &c){
			return c.autor;
		}
		virtual string getAutor(Serie &s){
			return s.autor;
		}


};

class ManualProgramare : private Carte{
	private:

	public:
		string getAutor(){
			return this->autor;;
		}
		string getTema(){
			return this->tema;
		}

		string getAutor(Carte &c){
			return c.autor;
		}
		string getAutor(Serie &s){
			return s.autor;
		}
		string getAutor(){
			return this->autor;
		}

};


class Capitol{
	private:
		int nr_pagini;
		string rezumat;
	public:

};



int main(){
	cout << "plm" << endl;



	return 0;
}