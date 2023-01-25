#include <stdio.h>
#include <string.h>

int main(void) {

	char first[100], second[100], concat[303];

	printf("Enter two strings");
	scanf("%100s", first);
	strcpy(concat, first);
	strcat(concat, " & ");
	scanf("%100s", second);
	strcat(concat, second);

	printf("%s\n", concat);

	return(0);
}
