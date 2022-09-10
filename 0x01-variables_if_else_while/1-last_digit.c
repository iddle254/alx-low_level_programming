#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 * Description: 'Prints text using printf'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = (n - (n / 10) * 10);
	if (last_digit == 0)
		printf("Last digit of %d is %i and is 0\n", n, last_digit);
	else if (last_digit > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, last_digit);
	else if (last_digit < 6)
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
