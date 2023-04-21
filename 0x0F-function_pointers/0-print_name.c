#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f: func pointer to  printer
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
