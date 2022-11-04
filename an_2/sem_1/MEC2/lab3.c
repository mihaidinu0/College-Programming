#include <stdio.h>

int main(){

    int i, j;
    int m;
    int n;

    float xa;

    float Fx, Fy;
    float xi, yi;
    float M;

    float H = 0, V = 0, N = 0;

    float epsilon = 0;

    printf("\nIntrodu xa: ");
    scanf("%f", &xa);

    printf("\nIntrodu nr. de forte: ");
    scanf("%d", &n);

    printf("Introducem fortele:\n");
    for (i = 1; i <= n; i++){
        printf("\nF%dx =\t F%dy =\t x%d=\t y%d=\t", i, i, i, i);
	    scanf("%f %f %f %f", &Fx, &Fy, &xi, &yi);
        H = H - Fx;
        V = V + (xi - xa)*Fy - yi*Fx;
        N = N + yi*Fx - xi*Fy;
        epsilon = epsilon + Fy;
    }

    

    printf("\nIntrodu numarul de cupluri: ");
    scanf("%d", &m);
    for (j = 1; j <= m; j++){
        printf("\nM%d = ", j);
        scanf("%f", &M);
        V = V + M;
        N = N - M;
    }

    
    V = V / xa;
    N = N / xa;
    epsilon = epsilon + V + N;

    printf("\n\n");
    printf("###############\n");
    printf("Rezultate\n");
    printf("###############\n");

    printf("H = %6.3f\n V = %6.3f\n N = %6.3f\n epsilon = %6.12f\n", H, V, N, epsilon);

    return 0;
}
