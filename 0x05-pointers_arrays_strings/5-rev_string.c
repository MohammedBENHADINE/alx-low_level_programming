#include "main.h"
/**
 * rev_string - rev a string.
 * @s: pointer to string.
 */

void rev_string(char *s)
{
	char *p;
	char tmp;
	int len = 0;
	int i;
	int j;

	if (*s == '\0')
		return;
	p = s;
	while (*p != '\0')
	{
		p++;
		len++;
	}
	j = 0;
	i = len;
	i--;
	while (j < len / 2)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
