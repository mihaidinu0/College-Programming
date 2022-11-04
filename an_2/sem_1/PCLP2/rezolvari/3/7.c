#include <stdio.h>

int main()
{
	// Hardcodez pentru matrice de ordin 4

	int i, j;
	int v[4][4];

	printf("Introdu numerele vietii: ");

	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			scanf("%d", &v[i][j]);
		}
	}

	// Printare
	printf("\n\n");

	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d\t", v[i][j]);
		}
		printf("\n");
	}


	printf("\n\n\n\n");

	// Print valorile de pe diagonala principala

	for  (i = 0; i < 4; i++) printf("%d\t", v[i][i]);
	printf("\n");

	return 0;
}
