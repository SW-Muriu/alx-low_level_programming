#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercased alphabets 10times.
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char alphabet;

	for (j = 0; j < 10; j++)
	{
		alphabet = 'a';

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

