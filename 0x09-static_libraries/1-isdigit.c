#include "main.h"

/**
 * _isdigit - Checks for digits (0 to 9)
 * @c: integer parametre
 *
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
