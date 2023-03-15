#include "main.h"
/**
 * _memset - fills a block of memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: the constant byte
 * @n: number of memory area bytes to be filled
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
