#include <stdio.h>

int main(void) {
    
	int c, bl;
	bl = 0;
	
	while ((c = getchar()) != EOF)
	       if( c == ' ' && bl == 0) {
		       bl = 1;
		       putchar(c);
	       }
	       else if (c != ' ') {
		       bl = 0;
		       putchar(c);
	       }

	return(0);
}
