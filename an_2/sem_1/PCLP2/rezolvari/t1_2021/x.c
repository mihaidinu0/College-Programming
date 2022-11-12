#include <stdlib.h>
#include <stdio.h>

int digit_count(int n){
	int dig = 0;
	while (n){
		dig++;
		n = n/10;
	}


	return dig;
}

void cmp(int vector[], int *i_max, int *digit_max){

	int digits[10];
	int i;
	int max = vector[0];

	for (i = 0; i < 10; i++){
		digits[i] = digit_count(vector[i]);
		printf("\n%d", vector[i]);
		if (vector[i] > max){
			max = vector[i];
			*i_max = i;
			printf("\n aaa %d", *i_max);
		}
	}

	*digit_max = vector[*i_max];

}



int main()
{


	int vector[] = {10, 3, 5, 234, 5353, 23, 1};
	int i_mx;
	int dig_max;
	cmp(&vector, &i_mx, &dig_max);

	printf("Pozitia %d valoarea %d", i_mx, dig_max);


	return 0;
}
