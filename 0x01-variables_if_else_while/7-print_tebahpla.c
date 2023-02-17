#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet in reverse order in lowercase
 * Only putchar functions allowed, and putchar only twice
 * Return: 0 if successful (Always), nonzero otherwise
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
