#include <stdio.h>
/**
 * main-this describes the main function
 * Return: always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("size of a char; ℅lu byte(s)\ln", (unsigned long)sizeof(a));
	printf("size of an int: ℅lu byte(s)\ln", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long int: ℅lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: ℅lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
