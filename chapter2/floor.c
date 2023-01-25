#include <stdio.h>

int main(void) {

        int euf, usf;

        printf("Enter US Floor");
        scanf("%d", &usf);
  		printf("\n");
        euf = usf - 1;
        printf("EU Floor %d\n", euf);

        return(0);
}
