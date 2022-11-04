#include <stdio.h>

int main()
{

	int v[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int pare[50], impare[50];

	int size = sizeof(v)/sizeof(int);


	int i;
	int j = 0, k = 0;

	for (i = 0; i < size; i++){
		// Par
		if (v[i] % 2 == 0){
			pare[j] = v[i];
			j++;
		}
		else{
			impare[k] = v[i];
			k++;
		}

	}

	// Functii de printare

	printf("\n\n Pare: ");
	for (i = 0; i < j; i++) printf("%d ", pare[i]);

	printf("\n\n Impare: ");
	for (i = 0; i < k; i++) printf("%d ", impare[i]);




	printf("\n");
	return 0;
}
