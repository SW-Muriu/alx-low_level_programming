#include "main.h"
/**
 * print_alphabet: function prints alphabets
 * Description: print lowercased alphabets & only use 2 putchars
 *
 * Return: 0 if successful (Always) otherwise return nonzero value
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
