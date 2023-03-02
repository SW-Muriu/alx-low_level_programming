#include "main.h"

/**
 * leet - encode a string into 1337
 * -Letters a and A should be replaced by 4
 *  Letters e and E should be replaced by 3
 *  Letters o and O should be replaced by 0
 *  Letters t and T should be replaced by 7
 *  Letters l and L should be replaced by 1
 * -Prototype: char *leet(char *)
 *  You can only use one if in your code
 *  You can only use two loops in your code
 *  You are not allowed to use switch
 *  You are not allowed to use
 *  any ternary operation
 * @s: string
 *
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i, j;
	char leet_letters[] = {'4', '3', '0', '7', '1'};
	char normal_letters[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == normal_letters[j] || s[i] == normal_letters[j] - 'a' + 'A')
			{
				s[i] = leet_letters[j];
				break;
			}
		}
	}

	return (s);
}
