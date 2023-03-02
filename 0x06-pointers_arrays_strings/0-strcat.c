#include "main.h"

/**
 * _strcat - concatenate two strings
 * appends 'src' string to the 'dest' string
 * overwrites the terminating null byte (\0)
 * at the end of dest, and then adds a terminating
 * null byte
 *
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
