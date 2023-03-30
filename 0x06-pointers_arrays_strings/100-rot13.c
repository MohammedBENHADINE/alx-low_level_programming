#include "main.h"
/**
 * rot13 - encoder
 * @s: pointer to string
 *
 * Description: encodes a string into rot13.
 * Return: pointer to encoded string
*/
char *rot13(char *s)
{
	char *r = s;
	char a[] = { 'A', 'M', 'N', 'Z'};
	int n[] = { 13, 13, -13, -13};
	int i;

	while (*s)
	{
		for (i = 0; i < 4; i = i + 2)
		{
			if ((*s >= a[i] && *s <= a[i + 1]) || (*s >=
					(a[i] + 32) && *s <= (a[i + 1] + 32)))
			{
				*s += n[i];
				break;
			}
		}
		s++;
	}
	return (r);
}
