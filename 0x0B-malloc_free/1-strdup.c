#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - allocates space in memory
 *@str: input string
 *Return: returns a pointer to a newly
 *allocated space in memory
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';

	return (cpy);
}
