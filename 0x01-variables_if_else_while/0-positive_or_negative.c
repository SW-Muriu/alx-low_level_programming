#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Takes in a random number n and and print the number
 * states whether n is is positive, negative, or zero
 * Return: 0 (Always) Successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}

