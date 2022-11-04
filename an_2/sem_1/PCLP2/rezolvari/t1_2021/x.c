#include <stdio.h>


int digit_count(int n){
	int dig = 0;
	while (n){
		dig++;
		n = n/10;
	}


	return dig;
}

int cmp(int *vector){

	int digits[10];
	int i;
	int i_max = -9999;
	int max = -99999;

	for (i = 0; i < 10; i++){
		digits[i] = digit_count(vector[i]);
		if (vector[i] > max){
			max = vector[i];
			i_max = i;
		}
	}

	int results[2] = {i_max, digits[i_max]};
	return results;
	//printf("%d %d", i_max, digits[i_max]);
}



int main()
{

	int vector[] = {1, 3, 4564, 234, 5353, 23, 1};

	int rezultate[2];
	rezultate = cmp(vector);
	printf("%d\t%d", rezultate[0], rezultate[1]);

	return 0;
}
