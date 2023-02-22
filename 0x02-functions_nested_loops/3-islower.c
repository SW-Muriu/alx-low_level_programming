#include "main.h"
/**
 * _islower - Return 1 if letter is lowercased, if not 0
 * @c: character for lowercased
 *
 * returns: 0 if lowercased, 1 if uppercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
