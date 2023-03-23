#include "main.h"
/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonal line
 *@n: number of times \ is printed
 */

void print_diagonal(int n)
{
	int num_lines;
	int num_spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 0; num_lines < n; num_lines++)
		{
			for (num_spaces = 0; num_spaces < num_lines; num_spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
