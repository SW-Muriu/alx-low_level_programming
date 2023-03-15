#include "main.h"
/**
 * _strchr - function locates character in a string
 * @s: string to locate character from
 * @c: charcater to be located
 *
 * Return: pointer to first pointer of char c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
