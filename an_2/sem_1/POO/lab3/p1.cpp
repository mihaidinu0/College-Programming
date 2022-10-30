/*
Să se realizeze o clasă Money care are ca atribut amount.
Atributul amount se setează prin constructor. Valoarea dată
la constructor trebuie sa fie una generată random între 0-100.
Creați 5 obiecte și afișați numărul de obiecte care au
amount mai mare de 50. (să se folosească static member doar
pentru contor). 4p
*/

#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Money{
    private:
        int amount;
    public:

        static int over50;

        static int getOver50(){
            return over50;
        }

        Money(){
            amount = rand() % 100;
            if(amount > 50) over50++;
            // [To-Do] Rzandomizeaza
        }
};

int Money::over50 = 0;



int main(){

    srand(time(NULL));

    Money m1;
    Money m2;
    Money m3;
    Money m4;
    Money m5;

    printf("Numar de obiecte peste 50: %d\n", Money::getOver50());

    return 0;

}