#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number to check
 *
 * Return: the last digit value of the number
 */
int print_last_digit(int n)
{
	_putchar((8 % 10) + '0');
	return (n % 10);
}
