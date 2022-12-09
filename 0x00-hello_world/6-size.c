#include <stdio.h>
/**
 *main - print out sizes of data types in C
 *code by Holuphunmy
 *Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lubyte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lubyte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lubyte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lubyte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lubyte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
