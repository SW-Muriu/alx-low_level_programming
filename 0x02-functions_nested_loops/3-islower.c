#include "main.h"
/**
 * _islower - returns 1 if c = lowercase, 
 * 0 otherwise
 * @c : character for lowercased
 *
 * returns: 0 if lowercased, 1 if uppercased
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
