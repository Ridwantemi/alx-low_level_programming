#include "main.h"
/**
 **_strcat - concatenates two strings
 *@dest: parameter pointer to a char
 *@src: parameter pointer to a char
 *Return: value of dest
 */
char *_strcat(char *dest, char *src)
{

int i;
int j;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}

