#include "main.h"
/**
 * binary_to_uint - convert a binary to uint
 * @b: binary data in char
 * Return: the converted value or O otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0, i;
	unsigned int conv = 0;
	const char *p = b;
	long mul = 1;

	if (b == NULL)
		return (0);
	while (*p != '\0')
	{
		if (*p != '0' && *p != '1')
			return (0);
		length++;
		p++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		conv += (b[i] - '0') * mul;
		mul = mul * 2;
	}
	return (conv);
}
