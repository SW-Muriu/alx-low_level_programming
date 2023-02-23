#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */

void more_numbers(void)
{
	int c, j;

	c = 0;
	while (c < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');
			j++;
		}
		c++;
		_putchar('\n');
	}
}
