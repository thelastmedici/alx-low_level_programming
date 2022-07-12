#include <string>
#include "main.h"

/**
 * _strcpy - copy string from src to dest
 * @dest: pointer to the string copied from src
 * @src: pointer to where the string is copied from
 *
 * Return: pointer to the string copied(dest)
 * dubbed by asiwaju
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
