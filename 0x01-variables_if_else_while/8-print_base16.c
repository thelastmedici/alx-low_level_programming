#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return:0 if success
 */
int main(void)
{
	int var;
	char charName;

	for (var = 0; var < 10; var++);
		putchar((var % 10) + '0');
	
	for (charName = 'a'; charName <= 'f'; charName++);
		putchar(charName);
	putchar(\'n');

	return (0);
}
