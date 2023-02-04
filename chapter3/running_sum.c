#include <stdio.h>

int main(void) {

	int a, b;
	int c = 1;

	while ((b = getchar()) != EOF)
		printf("Enter number: ");
		scanf("%i\n", &b);

		if( b < 0)
			break;
		else
			a += b;
	}

	printf("%i\n", a);

	return(0);

}
