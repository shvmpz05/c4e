#include <stdio.h>


void order(int a, int b, int c);


int main(void) {


	int a, b, c;

	printf("Enter three numbers: ");
	scanf("%i %i %i", &a, &b, &c);

	order(a, b, c);

	return(0);

}


void order(int a, int b, int c) {

	if((a < b) && (b < c))
	{
		printf("%i, %i, %i\n", a, b, c);
	}
	else if((a < c) && (c < b)) {
		printf("%i, %i, %i\n", a, c, b);
	}
	else
		printf("%i, %i, %i\n", c, a, b);

}
