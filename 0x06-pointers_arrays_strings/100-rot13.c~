#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * prototype of rot13 encoding
 * Use 1 if statement once,2 loops,
 * no switch & ternary operation
 * @s: string
 *
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char rot13_alphabet[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == alphabet[j] || s[i] == alphabet[j] - 'a' + 'A')
			{
				s[i] = rot13_alphabet[j];
				break;
			}
		}
	}

	return (s);
}


