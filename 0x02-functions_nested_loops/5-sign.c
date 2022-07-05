#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: the variable to be checked
 *Return: 1 if posistive, 0 if zero, -1 if negavtive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0);
		return (0);
	}
}
