#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int row;
	int number;
	int tens;
	int units;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			units = number % 10;
			if (number > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
