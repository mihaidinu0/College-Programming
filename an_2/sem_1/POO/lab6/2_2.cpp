/*
Realizați un exemplu legat de cărți în care să implementați:
- Friend class
- Friend function
- Virtual function (see lab 5)
*/

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


class Carte{
    protected:
        string titlu;
        string autor;
        string rezumat;
        string ISBN;
    public:

        friend string getTitlu(Carte *c);
        friend class Bibliotecar;
        // friend string getTitlu(Carte *c);
        // friend string getAutor(Carte *c);
        // friend string getRezumat(Carte *c);
        // friend string getISBN(Carte *c);

        Carte(string t, string a, string r, string i){
            this->titlu = t;
            this->autor = a;
            this->rezumat = r;
            this->ISBN = i;
        }

        string gTitlu(){
            return this->titlu;
        }
        string gAutor(){
            return this->autor;
        }
        string gRezumat(){
            return this->autor;
        }
        string gISBN(){
            return this->ISBN;
        }

};

// Clasa Abstracta Angajat (Al unei Biblioteci)
class Angajat{
    private:
        int salariu;
        int varsta;
        int nr_contract_munca;

    public:
        virtual int getSalariu() = 0;

        virtual int getVarsta() = 0;

        virtual int getCIM() = 0;

        virtual string getTitlu(Carte car) = 0;
        virtual string getAutor(Carte car) = 0;
        virtual string getRezumat(Carte car) = 0;
        virtual string getISBN(Carte car) = 0;

};

// Clasa concreta derivata din Angajat
class Bibliotecar : public Angajat{
    private:
        int salariu;
        int varsta;
        int nr_contract_munca;

    public:

        Bibliotecar(){
            cout << "Bibliotecar generat!" << endl;
        }

        int getSalariu(){
            return this->salariu;
        }

        int getVarsta(){
            return this->varsta;
        }

        int getCIM(){
            return this->nr_contract_munca;
        }

        string getTitlu(Carte car){
            return car.titlu;
        }
        string getAutor(Carte car){
            return car.autor;
        }
        string getRezumat(Carte car){
            return car.rezumat;
        }
        string getISBN(Carte car){
            return car.ISBN;
        }
};

string getTitlu(Carte *c){
    return c->titlu;
}

int main(){

    Carte abecedar("abecedar", "Mariana Popescu", "Universul literelor colorate!", "3445-2324-3424-3425");
    Bibliotecar marin;

    //Test Friend Class si Virtual Function
    cout << "Bibliotecarul returneaza: " << marin.getTitlu(abecedar) << endl;


    //Test Friend Function
    cout << "Functia returneaza: " << getTitlu(&abecedar) << endl;

    return 0;
}