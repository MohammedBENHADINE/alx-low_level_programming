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
	int cents;
	int coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents =  atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		coin += cents / coins[i];
		cents = cents % coins[i];
	}
	printf("%d\n", coin);
	return (0);
}
