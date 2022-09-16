#include <stdio.h>
#include <math.h>
/*double _sqrt(double x)
{

}*/
/**
 * largest_prime_factor - finds the largest prime factor
 *
 * @num: param from main
 *
 * Returns: void*/
void largest_prime_factor(long int num)
{
	int prime, largest;

	/*if n is even*/
	/*(num % 2 != 0) ? : num = num / 2;*/
	while (num % 2 == 0)
		num = num / 2;
	/*if n is odd*/
	for (prime = 3; prime < sqrt(num);prime += 2)
	{
		while (num % prime == 0)
		{
			num = num / prime;
			largest = prime;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
/**
 * main - entry point
 *
 * Description: calls largest_prime factor
 * Returns: void
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return(0);
}
