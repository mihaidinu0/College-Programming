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

/*
Abstract - Carte
Carte -> Nuvela, Manual, etc.
Cum inglobez subclasele fara sa fac overloading pe fiecare tip?
Folosesti superclase abstracte numai daca nu intentionezi sa le folosesti.
*/

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

};

// Clasa concreta derivata din Angajat
class Bibliotecar : public Angajat{
    private:
        int salariu;
        int varsta;
        int nr_contract_munca;

    public:

        friend Carte;

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

        string getTitlu(){
            return this->titlu;
        }
        string getAutor(){
            return this->autor;
        }
        string getRezumat(){
            return this->autor;
        }
        string getISBN(){
            return this->ISBN;
        }

};

class Nuvela : public Carte{
    private:
        string serie;
        string protagonist;
    public:
        


};

class Manual : public Carte{
    private:
        string subiect;
        vector<string> cuvinte_cheie;
        
    public:
};


string getTitlu(Carte *c){
    return c->titlu;
}

int main(){



    return 0;
}