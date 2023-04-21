#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - another variadic func
 * @separator: const char pointer
 * @n: number of args
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		if (!separator)
			printf("%d", va_arg(ap, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ap, int), separator);
		else
			printf("%s%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
