#include <stdio.h>

int sumare(int numar){


	int suma = 0;
	if (numar >= 10){
		while (numar){
			suma += numar % 10;
			numar = numar / 10;
		}
		return sumare(suma);
	}
	else return numar;

}


int main()
{

	printf("%d", sumare(888));
	printf("\n\n\n");

	return 0;
}
