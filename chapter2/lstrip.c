#include <stdio.h>
#include <string.h>
#include <ctype.h>

void py_lstrip(char inp[]);

int main(void){

    char s1[] = "   Hello   World    ";

    py_lstrip(s1);

    printf("-%s-\n", s1);

    return(0);
}

void py_lstrip(char inp[]) {
	
	int i = 0;
	int j = 0;
	int found = 0;

	for(i; i < strlen(inp)-1; i++) {
		if (! found && isspace(inp[i])) continue;
		if (i == j) return;
		found = 1;
		inp[j++] = inp[i];
	}
	inp[++j] = '\0';
}
