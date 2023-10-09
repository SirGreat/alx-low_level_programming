#include "main.h"
#include <stdio.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: number of bytes to allocate
  * Return: a pointer to he allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
	p4rintf(stderr, "Memory allocation failed!\n");
	exit(98);
	}
	return (p);
}
