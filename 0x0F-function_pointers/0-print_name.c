#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name from a function pointer
 * @name: name to print
 * @f: function to print with
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
	{
		f(name);
	}

