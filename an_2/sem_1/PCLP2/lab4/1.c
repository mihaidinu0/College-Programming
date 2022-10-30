// DINU MIHAI-DINEL
// 321AC   IS-ACS

// LAB 4    PROBLEMA 1

#include <stdio.h>

int main(){

    // Declaram variabilele
    int sir[50], n, i, nr_crt;

    // Introducere n
    printf("Cate numere vrei sa introduci? ");
    scanf("%d", &n);

    // Citire sir de caractere
    printf("Introdu numerele:\n");
    for(i = 0; i < n; i++){
        printf("%d/%d: ", i+1, n);  // Afisam un contor ca sa stim unde ne aflam cu citirea sirului
        scanf("%d", &nr_crt);
        sir[i] = nr_crt;
    }

    // Declaram niste contoare pentru diferite caracteristici ale sirului
    int flag_cresc = 0;
    int flag_desc = 0;
    int flag_const = 0;

    // Parcurgem sirul si verificam cum se comporta
    for (i=0; i<n-1; i++){
        if( sir[i] > sir[i+1] ){
            flag_desc++;
        }
        if( sir[i] < sir[i+1] ){
            flag_cresc++;
        }
        if( sir[i] == sir[i+1] ){
            flag_const++;
        }
    }

    // Verificare daca sirul este CONSTANT
    if(flag_const >= n-1){
        printf("Constant!");
        return 0;
    }

    // Verificare daca sirul este CRESCATOR
    if(flag_cresc > 0 && flag_desc == 0){
        printf("Crescator!");
        return 0;
    }

    // Verificare daca sirul este DESCRESCATOR
    if(flag_desc > 0 && flag_cresc == 0){
        printf("Descrescator!");
        return 0;
    }

    // Verificare daca sirul NU ESTE ORDONAT
    if(flag_desc > 0 && flag_desc > 0){
        printf("Nu este ordonat!");
        return 0;
    }

    return 0;
}