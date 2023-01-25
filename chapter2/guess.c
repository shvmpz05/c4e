#include <stdio.h>

int main(void) {

	int line[1000];
	int myval;

	while(scanf("%d", &myval) != EOF) {
		if(myval == 42) {
			printf("Nice work!\n");
			break;
		}
		else if (myval > 42)
			printf("Too high - guess again\n");
		else
			printf("Too low - guess again\n");
	}
	return(0);
}
