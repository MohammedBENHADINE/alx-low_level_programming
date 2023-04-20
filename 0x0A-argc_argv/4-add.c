#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 *@argc: number of args
 *@argv: pointer to args'array
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int c;
	int sum;
	char *s;

	sum = 0;
	c = 0;

	i = 1;
	while (i < argc)
	{
		s = argv[i];
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}

	for (i = 1; i < argc; i++)
	{
		c = atoi(argv[i]);
		sum = sum + c;
	}
	printf("%d\n", sum);
	return (0);
}
