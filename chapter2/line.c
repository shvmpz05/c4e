#include <stdio.h>

int main(void) {
	
	char line[1000];

	printf("Enter line");
	scanf("%[^\n]1000s", line);
	printf("\n");
	printf("Line: %s\n", line);

	return(0);
}
