#include <stdio.h>

int main()
{

	char c;

	printf("Introdu un caracter: ");
	scanf("%c", &c);

	int ascii = (int) c;

	printf("Codul ascii pentru %c este %d\n", c, ascii);

	return 0;




}
