#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("siz of a char: %lu byte(s)\n", (unsigned long)sizeof(a);
	printf("siz of a int: %lu byte(s)\n", (unsigned long)sizeof(b);
	printf("siz of a long int: %lu byte(s)\n", (unsigned long)sizeof(c);
	printf("siz of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d);
	printf("siz of a char float: %lu byte(s)\n", (unsigned long)sizeof(f);
	return (0);
}
