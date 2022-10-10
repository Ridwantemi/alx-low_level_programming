#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function
 *struct dog - struct type
 *@*d - memory address
 *@name - name
 *@age - dog age
 *@owner - dog owner
 *Return -void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
