#include "main.h"
/**
 * puts2 - print other characters in a string.
 * @s: pointer to string.
 */

void puts2(char *s)
{
	char *p;
	int i = 0;

	p = s;

	while (*(p + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(p + i));
		}
		i++;
	}
	_putchar('\n');
}
