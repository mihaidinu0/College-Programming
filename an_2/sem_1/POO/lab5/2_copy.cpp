#include <iostream>
using namespace std;


class Angajat{
    public:
        Angajat(){
            cout << "Angajat nou." << endl;
        }
        
        void work(){
            cout << "Semneaza hartii." << endl;
        }

        void go_home(){
            cout << "Ia autobuzul." << endl;
        }
};

class Manager : public Angajat{
    public:
        Manager(){
        cout << "Promovat la Manager." << endl;
        }

        void work(){
            cout << "Asigneaza task-uri." << endl;
        }

        void go_home(){
            cout << "Ia masina." << endl;
        }
};

class CEO : public Manager{
    public:
        CEO(){
            cout << "Ales CEO de catre Board-ul de Directori.";
        }  
        void work(){
            cout << "Ia decizii." << endl;
        }

        void go_home(){
            cout << "Ia elicopterul." << endl;
        }
};



int main(){

    Angajat Andrei;
    Manager Petru;
    CEO Valentin;

    Andrei.work();
    Petru.work();
    Valentin.work();

    Andrei.go_home();
    Petru.go_home();
    Valentin.go_home();

    return 0;
}