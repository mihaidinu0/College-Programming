#include <stdio.h>

int main()
{
	int n;
	int i;
	int v[100];

	printf("introdu numarul de elemente: ");
	scanf("%d", &n);


	// Citire
	for (i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}

	// Printare
	printf("\n\n");

	for (i = 0; i < n; i++){
		printf("%d ", v[i]);
	}

	printf("\n\n");


	// Verificare

	int flag_cresc = 0, flag_desc = 0, flag_const = 0;

	for (i = 0; i < n-1; i++){
		if(v[i] == v[i+1] flag_const++;
		if(v[i] > v[i+1] flag_desc++;
		if(v[i] < v[i+1] flag_cresc++;
	}

	if (flag_desc > 0 || flag_cresc > 0){
		
	}

	return 0;
}
