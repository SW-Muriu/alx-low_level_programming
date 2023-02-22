#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercased alphabets 10times.
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char alphabet;

	for (j=0;j <= 10;j++)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}

