#include <stdio.h>

int main(){
    int n, d;
    scanf("%d", &n);
    while(n){
        d = n % 10;
        n /= 10;
        printf("%d ", d);
    }
}