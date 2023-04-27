#include "main.h"
/**
 * create_array - crate array of chars
 * @size: size of array
 * @c: init character
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p, *q;
	unsigned int i;

	p = malloc(size * sizeof(char));
	if (p == NULL || size == 0)
		return (NULL);
	q = p;
	for (i = 0; i < size; i++)
		*(q+i) = c;
	return (p);
}
