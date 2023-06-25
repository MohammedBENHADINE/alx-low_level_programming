#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print chessboard
 * @a: matrix of integers
 * @s: size of matric
 *
 * Description:  prints the sum of the two diagonals of a
 * square matrix of integers.
 * Return: sum diag1 , sum diag2
 **/
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + i + i);
		diag2 += *(a + i + size - 1 - i);
	}
	printf("%d, %d", diag1, diag2);
}
