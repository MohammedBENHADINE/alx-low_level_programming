#include "main.h"
/**
 * swap_int - swaps values of integers
 * @a: pointer to int
 * @b: pointer to int
 */

void swap_int(int *a, int *b)
{
	int tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}

