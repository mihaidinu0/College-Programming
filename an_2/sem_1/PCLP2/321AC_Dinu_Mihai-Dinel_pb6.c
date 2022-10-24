#include <stdio.h>

#define N 100

int main(){
    int sir[N];
    int nr_crt, i;
    int count = 0;

    for (i = 0; i < N; i++){
        scanf("%d", &nr_crt);
        if(nr_crt == 0) break;
        sir[i] = nr_crt;
        count++;

    }

    for (i = 0; i < count; i++){
        printf("%d ", sir[i]);
    }
}