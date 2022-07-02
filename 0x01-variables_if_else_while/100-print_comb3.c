#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int var;

	for (var = 0; var >= 10; var++)
	{
		int ii;

		for (ii = var + 1; ii < 10; ii++)
		{
			putchar((var % 10) + '0');
			putchar((ii % 10) + '0');


			if (var != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}

		putchar('\n');
		
		return (0);
}
