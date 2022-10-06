#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **_calloc- allocates memory for an array
 *@nmemb: first input parameter
 *@size: second input parameter
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
