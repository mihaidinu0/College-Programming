/*
Modelați o companie de angajați la care
să aveți o moștenire multinivel pentru
angajați (minim 3 clase, A- > B -> C).
Fiecare clasă va avea 2 metode care pleacă
din clasa de bază și sunt suprascrise în
clasele copii.
*/

#include <iostream>
using namespace std;



class Angajat{
    private:
        int salariu;
    public:
        Angajat();
        void lucreaza();
        void cere_ajutor();
};

class Programator : public Angajat{ 
    public:
        Programator();
        void lucreaza();
        void cere_ajutor();
};

class Senior : public Programator{
    public:
        Senior();
        void lucreaza();
        void cere_ajutor();
        void programeaza_meet();
};

class Junior : public Programator{
    public:
        Junior();
        void lucreaza();
        void cere_ajutor();
};

class Intern: public Junior{
    public:
        Intern();
        void lucreaza();
        void cere_ajutor();
};



// Constructori
Angajat::Angajat(){
    cout << "Hooray! Avem un nou coleg de munca generic!" << endl;
}

Programator::Programator(){
    cout << "Am mai angajat un programator generic." << endl;
}

Senior::Senior(){
    cout << "Bun venit, dom' Senior! Ne bucuram ca aveti 20 de ani de experienta in Rust!" << endl;
}

Junior::Junior(){
    cout << "Tocmai ai devenit cineva, ai un job fara temporizator!" << endl;
}

Intern::Intern(){
    cout << "Ba, v-am zis sa nu mai lasati usa deschisa, ca intra vreun integralist d-asta?" << endl;
}

// Metode
void Angajat::lucreaza(){
    cout << "Pana acum toate bine, treaba merge." << endl;
}

void Programator::lucreaza(){
    cout << "Pfai, iar s-o razgandit clientul..." << endl;
}

void Senior::lucreaza(){
    cout << "Github.com... pull request.. review... hai ca arata bine... merge! Gata, pauza." << endl;
}

void Junior::lucreaza(){
    cout << "A trecut 1 an si tot n-am idee ce trebuie sa fac." << endl;
}

void Intern::lucreaza(){
    cout << "N-am nicio idee ce trebuie sa fac." << endl;
}

// Metode
void Angajat::cere_ajutor(){
    cout << "Am si eu o problema, ma poti ajuta?" << endl;
}

void Programator::cere_ajutor(){
    cout << "Ce naiba imi scapa aici?" << endl;
}

void Senior::cere_ajutor(){
    cout << "Pe cine intreb eu... pe CEO?" << endl;
}

void Junior::cere_ajutor(){
    cout << "Eroarea asta e noua.. Dom' Senioooor!!!! Iar am bulit codebase-ul!" << endl;
}

void Intern::cere_ajutor(){
    cout << "Daca mai pun o singura intrebare, sigur ma dau afara... *opens StackOverflow*" << endl; 
}


// Alte metode

void Senior::programeaza_meet(){
    cout << "Joi la 15:00 meet, baieti!";
}

#include <iostream>
using namespace std;

int main(){

    cout << "Angajati noi:" << endl << "#########" << endl;
    Angajat misu;
    Programator costache;
    Senior liviu;
    Junior matei;
    Intern gogu;

    cout << "\nPipera, ora 09:15. Incepe o noua zi de lucru...\n"  << "#########" << endl;
    misu.lucreaza();
    costache.lucreaza();
    liviu.lucreaza();
    matei.lucreaza();
    gogu.lucreaza();

    cout << "\nToata lumea cam da de belea" << "\n#########" << endl;
    misu.cere_ajutor();
    costache.cere_ajutor();
    liviu.cere_ajutor();
    matei.cere_ajutor();
    gogu.cere_ajutor();

    cout << "\nSi vestea naspa..." << "\n#########" << endl;
    liviu.programeaza_meet();

    return 0;
}