#include "main.h"

int py_len(char self[]) {

	int i, len = 0;

	for(i = 0; self[i]; i++) len = i;

	return i;

}
