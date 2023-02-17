#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabets in lowercase and then uppercase alphabet,
 * Uses putchar
 * Return: 0 (Always) Successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
