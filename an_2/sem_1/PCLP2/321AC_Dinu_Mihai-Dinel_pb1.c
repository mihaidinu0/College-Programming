#include <stdio.h>

int main(){

    char caracter;
    scanf("%c", &caracter);
    int ascii = (int) caracter;

    if (ascii >= 65 && ascii <= 90) printf("Litera mare");
    else if (ascii >= 97 && ascii <= 122) printf("Litera mica");
    else if (ascii >= 48 && ascii <= 57) printf ("Cifra");
    else printf("Altceva
    return 0;
}