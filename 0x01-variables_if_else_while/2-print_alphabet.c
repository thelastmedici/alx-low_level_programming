#include <stdio.h>
/**
 * main - prints all letter of the alphabet in lower case
 *
 * Return: 0 if success
 */
int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar("\n");

	return (0);
}
