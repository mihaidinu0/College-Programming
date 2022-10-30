#include <stdio.h>

int main(){
    int suma = 1, suma_curenta = 1, n, i;
    scanf("%d", &n);

    for (i = 2; i <= n; i++){
        suma_curenta *= i;
        suma += suma_curenta;
    }
    printf("%d", suma);
}