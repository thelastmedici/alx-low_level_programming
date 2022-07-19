#include <string.h>
#include "main.h"
/**
 * _strstr - locate a character in a string
 * @s: pointer to the string s to be searched
 * @c: pointer to  the character to be searched for
 *
 * Return: pointer to the first position of the c
 */

char *_strstr(char *s, char *c)
{
	return (strstr(s, c));
}
