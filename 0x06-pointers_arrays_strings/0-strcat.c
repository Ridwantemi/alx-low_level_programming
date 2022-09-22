#include <string.h>
#include "main.h"
/**
 **_strcat - concatenates two strings
 *@dest: dest
 *@src: src
 *Return: string
 */
char *_strcat(char *dest, char *src);
{
char *dest[] = "dest";
char *src[] = "src";
char dest;

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

