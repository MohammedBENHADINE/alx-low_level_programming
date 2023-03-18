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
	char str[] = "0123456789abcdef";
	int i;

	for (i = 0; i < (int) strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
