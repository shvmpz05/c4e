#include <stdio.h>

int main(void) {

	char line[100];

	printf("Enter line");
	fgets(line, 100, stdin);
	printf("\n");
	printf("Line: %s\n", line);

	return(0);
}
