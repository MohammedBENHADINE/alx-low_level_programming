#include "main.h"
/**
 * rev_string - rev a string.
 * @str: pointer to string.
 */

void rev_string(char *str)
{
	char *z = str;
	int i;
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}

	i = count - 1;
	while (i >= 0)
	{
		*str = *(z + i);
		i--;
	}
}
