#include "main.h"
#include <stdio.h>
/**
 * fibonacci_even - find even fibonacci
 * Description: gets the sum of even fibonacci numbers
 * Return: null
 */
void fibonacci_even(void)
{
	long int first = 1, second = 2, next = first + second, even_sum = 0;

	while (second <= 4000000)
	{
		if ((first % 2) == 0)
			even_sum += first;
		if ((second % 2) == 0)
			even_sum += second;
		first = second;
		second = next;
		next = first + second;
	}
	printf("%lu", even_sum);
}
/**
 * main - Entry point
 * Description: calls muliples function
 * Return: null
 */
int main(void)
{
	fibonacci_even();
	return (0);
}
