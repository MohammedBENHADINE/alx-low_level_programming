#include "main.h"
#include <stdio.h>
/**
 * myPow - compute the power of an int
 * @x: base
 * @n: exponent
 * Return: the result
 */

int myPow(int x, int n)
{
	int i;
	int number = 1;

	for (i = 0; i < n; ++i)
		number *= x;
	return (number);
}
/**
 * _atoi - string to integer
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int start = -1;
	int end = -1;
	int count_minus = 0;
	int i = 0;
	int power = 0;
	unsigned int result = 0;
	int started = 0;

	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			count_minus++;
		if ((s[i] >= 48 && s[i] <= 57) && started == 0)
		{
			start = i;
			started = 1;
		}
		if ((s[i] >= 48 && s[i] <= 57) && started
				&& (s[i + 1] < 48 || s[i + 1] > 57))
		{
			end = i;
			break;
		}
		i++;
	}
	if (end == -1)
		return (0);
	power = end - start;
	i = 0;
	while (i <= power)
	{
		result += (s[start + i] - 48) * myPow(10, power - i);
		i++;
	}
	if (count_minus % 2 == 0)
		return (result);
	else
		return (-result);
}
