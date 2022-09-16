#include "main.h"
#include <stdio.h>
/**
 * fibonacci_50 - find fibonacci
 * Description: gets the first 50 fibonacci numbers
 * Return: null
 */
void fibonacci_50(void)
{
	int count = 3;
	long int first = 1, second = 2, next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu\n", next);
		} else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		count++;
	}
}
/**
 * main - Entry point
 * Description: calls muliples function
 * Return: null
 */
int main(void)
{
	fibonacci_50();
	return (0);
}
