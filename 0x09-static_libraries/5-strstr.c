#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: mother string in question
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of located substring
 * - NULL, if substring is not located
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
