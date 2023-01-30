#include <stdio.h>
#include "main.h"

#define MAXLINE 1000

int main(void) {

	int x;
	int i = 0;
	char s[MAXLINE];

	while((x= getchar()) != EOF) {
		
		s[i++] = x;

	}
	s[i] = '\0';	
	
	printf("length : %i\n", py_len(s));
	py_reverse(s, py_len(s));
	return 0;
}
