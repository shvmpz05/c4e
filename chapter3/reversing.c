#include <stdio.h>

void reverse(char t[]);

char *copy(char s1[], char s2[]);

int main(void) {
	

	char t[1000];

	copy("Hello World", t);
	printf("%s\n", t);
	reverse(t);
	printf("%s\n", t);
	printf("%s\n", t);
	reverse(copy("XY", t));
	printf("%s\n", t);
	reverse(copy("Even", t));
	printf("%s\n", t);
	reverse(copy("Odd", t));
	printf("%s\n", t);
      	reverse(copy("civic", t));
	printf("%s\n", t);

	return(0);

}

void reverse(char t[])
{
	int length = 0;
	int i;

	for(i = 0; t[i] != '\0'; i++)
		length++;
	
	char s[length + 1];
	for(i = 0; i <= length; i++)
		s[i] = t[length - i - 1];

	s[++i] = '\0';
	for(i = 0; (t[i] = s[i]); i++);
}


char *copy(char s1[], char s2[])
{

	int i;

	for(i = 0;(s2[i] = s1[i]); i++);
	return s2;
}
