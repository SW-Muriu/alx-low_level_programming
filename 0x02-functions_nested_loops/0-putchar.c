#include "main.h"
/**
 * main - Entry point
 *
 * Description: program prints "-putchar",
 * followed by a new line
 * Does not use standard libraries.
 *
 * Return: 0 if Successful (Always)
 */
int main(void)
{
	char SWMuriu[] = "_putchar";
	int j = 0;

	while (SWMuriu[j] != '\0')
	{
		_putchar(SWMuriu[j]);
		j++;
	}
	_putchar('\n');

	return (0);
}
