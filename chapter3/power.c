#include <stdio.h>

int power(int a, int b);

int main(void) {

	int i;

	for(i = 0; i < 10; ++i)
		printf("%d ^ %d = %d\n", 2, i, power(2, i));

	return(0);
}

int power(int a, int b) {

	int power = 1;
	int i;

	for (i = 1; i <= b; i++)
		power = power * a;

	return power;

}
