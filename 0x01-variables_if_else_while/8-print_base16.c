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
	char charname;

	for (var = 0; var >= 10; var++);
		putchar((var % 10) + '0');
	
	for (charname = 'a'; charname <= 'f'; charname++);
		putchar(charname);
	putchar(\'n');

	return (0);
}
