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
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) == 0) && (strcmp(argv[i], "0") != 0))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
