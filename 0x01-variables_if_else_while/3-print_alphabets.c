#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char strLower[] = "abcdefghijklmnopqrstuvwxyz";
	char strUpper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < (int) strlen(strLower); i++)
	{
		putchar(strLower[i]);
	}
	for (i = 0; i < (int) strlen(strUpper); i++)
	{
		putchar(strUpper[i]);
	}
	putchar('\n');
	return (0);
}
