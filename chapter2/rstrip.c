#include <stdio.h>
#include <string.h>

void py_rstrip(char mychar[]);

int main(void) {

    char s1[] = "   Hello   World    ";

    void py_rstrip();
    py_rstrip(s1);

    printf("-%s-\n", s1);
}

void py_rstrip(char mychar[]) {
	
	int i = 0;
	int j = 0;

	for(i = 0; i < strlen(mychar)-1; i++) {
		if(mychar[i] == '\n' || mychar[i] == '\t' || mychar[i] == ' ' ) {
		}
		else {
			j = i;
		}
	}
	if (j + 1 < strlen(mychar) ) mychar[j + 1] = '\0';
} 
