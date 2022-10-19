#include <stdio.h>

int main(){
    
    int v[50], i, prag;
    int n = 6;


    printf("Introdu numerele:\n");
    for (i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    printf("\n#########\n");



    printf("Introdu un prag: ");
    scanf("%d", &prag);
    printf("Valorile care depasesc pragul de %d:", prag);
    for(i=0; i<n; i++){
        if(v[i] > 5){
            printf("\nLa pozitia %d: %d", i, v[i]);
        }
    }
    printf("\n#########\n");
    
    
    
    printf("Valorile de pe pozitii pare: ");
    for(i=0; i<n; i+=2){
        printf("%d ", v[i]);
    }
    printf("\n#########\n");





    // 1 5 8 0 0 1 0 5 6 8
    int j;
    for(i = 0; i<n; i++){
        printf("%d ", v[i]);}
    for(i=0; i<n-1; i++){
        if(v[i]==0){
            for(j=i; j<n-1; j++){
                v[j] = v[j+1];
                v[j+1] = 0;}}}
    printf("\n");
    for(i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n#########\n");

    int div = 0;
    for(i=0; i<n; i++){
        if(v[i] == 0) continue;
        for(j = 1; j<=v[i]; j++){
            if(v[i] % j == 0){
                div++;
            }}
        v[i] = div;
        div = 0;
        }
    for(i=0; i<n; i++){
        printf("%d ", v[i]);
    }




    return 0;
}