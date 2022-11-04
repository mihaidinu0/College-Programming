#include <stdio.h>

int main()
{
	int v[] = {0, 0, 0, 1, 3, 5, 7, 0};
	int n = sizeof(v)/sizeof(int);
	int p;
	int i;

	printf("Vector initial:\n");
	for (i = 0; i < n; i++){
		printf("%d\t", v[i]);
	} 

	printf("\n\nIntrodu numarul de pozitii: ");
	scanf("%d", &p);

	// Tine cont de multiplii de dimensiune a vectorului
	int p_real = p % n;

	int v_nou[n];

	for (i = 0; i < n-p; i++){
		v_nou[i+p] = v[i];
	}

	for (i = 0; i < p; i++){
		v_nou[i] = v[i+n-p];
	}

	printf("\n\n");

	for (i = 0; i < n; i++){
		printf("%d\t", v_nou[i]);
	}

	printf("\n\n\n");

	return 0;
}
