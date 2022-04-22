#include<stdio.h>


struct persoana
    {
     char nume[40];
     char prenume[40];
     char oras[50];
      char liceu[100];
      char hobby[10][40];
    };


int main()
{


    struct persoana Alex;
    strcpy(Alex.nume, "Popescu");
    strcpy(Alex.prenume, "Alex");
    strcpy(Alex.oras, "Bucuresti");
    strcpy(Alex.liceu, "Liceul Dinu Lipati");

    afisare(Alex);
}


int afisare(pers){
    printf("%c", pers.nume);

    return 0;
}
