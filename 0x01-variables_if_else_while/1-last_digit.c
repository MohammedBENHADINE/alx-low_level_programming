#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;

	printf("Last digit of %d is %d ", n, r);
	if (r > 5)
		printf("and is greater than 5\n");
	else if (r == 0)
		printf("and is zero\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
