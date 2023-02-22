#include "main.h"
/**
 * _isalpha - Check if the character n is an alphabet
 * @n: type int character
 *
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int n)
{
	if ((n > 64 && n < 91)) || ((n > 96 && n < 123))
		return (1);
	else
		return (0);
}
