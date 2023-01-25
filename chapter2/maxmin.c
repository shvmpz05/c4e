#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {

	int maxval, minval, myval;
	int first = 1;
	char line[1000];
	minval = INT_MAX;

	while(fgets(line, 1000, stdin) != NULL) {

		if(strncmp(line, "done", 4) == 0) break;

		myval = atoi(line);

		if (first || myval > maxval) maxval = myval;
		if (first || myval < minval) minval = myval;

		first = 0;
	}

	printf("Maximum %d\n", maxval);
	printf("Minimum %d\n", minval);

	return(0);
}
