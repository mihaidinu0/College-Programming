#include <stdio.h>

int main()
{

	int a;

	printf("Introdu un numar intreg: ");
	scanf("%d", &a);

	switch (a){
		case 1:
			printf("Luni\n");
			break;
		case 2:
			printf("Marti\n");
			break;
		case 3:
			printf("Miercuri\n");
			break;
		case 4:
			printf("Joi\n");
			break;
		case 5:
			printf("Vineri\n");
			break;
		case 6:
			printf("Sambata\n");
			break;
		case 7:
			printf("Duminica\n");
			break;
		default:
			printf("Eroare!\n");
			break;
		}


	return 0;
}
