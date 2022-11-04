#include <stdio.h>

int main()
{
	int a;

	printf("Introdu un numar: ");
	scanf("%d", &a);

	if (a == 1)		printf("Luni\n");
	else if (a == 2)	printf("Marti\n");
	else if (a == 3)	printf("Miercuri\n");
	else if (a == 4)	printf("Joi\n");
	else if (a == 5)	printf("Vineri\n");
	else if (a == 6)	printf("Sambata\n");
	else if (a == 7)	printf("Duminica\n");
	else 			printf("Eroare!\n");




	return 0;
}
