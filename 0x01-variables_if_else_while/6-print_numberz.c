#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all single digit numbers of base 10, starting from 0.
 * You are not allowed to use any of type char, instead use putchar function, and only twice
 * Return: 0 if successful (Always) non zero otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
