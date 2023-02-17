#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main: Entry point
 * Description: assigns a random number to the variable n each time its executed
 * prints the last digit of the number stored in n
 * Return: 0 Always (successful)
 */

int main(void)
{
	int n;
	int m;

	strand(time(0));
	n = rand() - RAND_MAX/2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n",n ,m);
	else if (m==0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);

	return (0);
}
