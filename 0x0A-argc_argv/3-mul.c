#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *@argc: number of args
 *@argv: pointer to args'array
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n",  atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
