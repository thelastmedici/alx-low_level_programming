#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all letter of the alphabet in lower case
 *
 * Return: 0 if success
 */
int main(void)
{
	char var; 
	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
