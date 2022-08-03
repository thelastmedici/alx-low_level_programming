#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: pointer to the name to  be printed
 * @f: function pointer to callback a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
