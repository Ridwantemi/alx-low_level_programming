#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies two arguments and prints result
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
