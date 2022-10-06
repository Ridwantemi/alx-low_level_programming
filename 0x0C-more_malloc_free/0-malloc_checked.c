#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: input character
 *Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (!pointer)
	{
	exit(98);
	}
	return (pointer);
}