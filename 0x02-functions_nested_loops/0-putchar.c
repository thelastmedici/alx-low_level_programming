#include "main.h"


/**
 * main - this program prints _putchar
 *
 * Return:0 if succesful
 */
int main(void)
{
	char name[]="_putchar";
	int ii;
	int lenVar = sizeof(var) / sizeof(var[0]);

	for (ii=0; ii < lenVar - 1; ii++)
	{
		_putchar(var[ii]);
	
	}
		_putchar('\n');

	return (0);

}

