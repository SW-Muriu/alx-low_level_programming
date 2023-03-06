#include "main.h"
/**
 * _strpbrk - funtion searches str for any of a set of bytes
 * @s: string in question
 * @accept: set containing the bytes in question
 *
 * Return: pointer to bytes found, NULL if no bytes found
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
