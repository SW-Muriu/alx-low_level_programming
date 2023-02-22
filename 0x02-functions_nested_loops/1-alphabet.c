#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - function prints,
 *  lowercased alphabets
 *  only uses 2 putchar
 *
 * Return: 0 if successful (Always)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
