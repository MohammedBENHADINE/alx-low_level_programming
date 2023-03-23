#include "main.h"
/**
 * print_triangle - entry point
 *
 * Description: Prints triangle on terminal
 *@n: the size of the triangle
 */

void print_triangle(int n)
{
	int num_lines;
	int num_spaces;
	int num_dashes;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			for (num_spaces = 1; num_spaces <= n - num_lines; num_spaces++)
				_putchar(' ');
			for (num_dashes = 1; num_dashes <= num_lines; num_dashes++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
