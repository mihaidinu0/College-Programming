#include <stdio.h>
#include <stdlib.h>

void br(){
    printf("\n");
}


void main(){

    int a = 21;
    int b;
    int c;

    int *z;
    z = &a;




    printf("Pointeri: Modul de functionare al acestora");
    br();
    printf("Avem a = %d", a);
    br();
    printf("Adresa lui a = %p", &a);
    br();
    printf("z = %d", *z);
    br();
    printf("Adresa lui z = %p", &z);
    &z++;
    br();
    printf("Adresa lui z = %p", &z);

}