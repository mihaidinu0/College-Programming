#include <stdio.h>

void main(){
    char caracter;
    printf("Introdu o litera: ");
    scanf("%c", &caracter);
    printf("Codul ASCII pentru %c = %d", caracter, caracter);

    printf("\nUrmatorul caracter: %c", (char)((int)++caracter));
}

