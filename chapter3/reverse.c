#include "main.h"
#include <stdio.h>

void py_reverse(char mychar[], int len) {

	int i;
	char j[len];
	for(i = 0; i < len; i++)
		j[i] = mychar[len - 1 - i];

	j[i] = '\0';

	printf("%s\n", j);
}
