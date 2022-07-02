#include <stdi0.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return:0 if succesful
 *
 */
int main (void)
	int var;
{
	for (var = 0; var < 99; var++)
	{
		int ii;

		for (ii = var + 1; ii < 100, ii++)
		{
			putchar((var / 10) + '0');
			putchar((var % 10) + '0');
			putchar('');
			putchar((ii / 10) + '0');
			putchar((ii % 10) + '0');

			if (var != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');

	return (0);
}
