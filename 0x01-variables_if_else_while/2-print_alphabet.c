#include <stdio.h>
/**
 * main - Entry point
 * Description: prints program in lowercase, and adds a new line
 * -uses putchar
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
	putchar('\n');

	return (0);
}
