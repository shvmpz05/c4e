#include <stdio.h>

int mymult(int a, int b);

int main(void) {

    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n",retval);

    return(0);

}

int mymult(int a, int b) {
	return a * b;
}
