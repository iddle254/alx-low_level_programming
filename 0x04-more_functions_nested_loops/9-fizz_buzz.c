#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - interview question
 * Description: Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: void
 */
void fizz_buzz(void)
{
	int pointer;

	for (pointer = 1; pointer <= 100; pointer++)
	{
		if (((pointer % 3) == 0) && ((pointer % 5) == 0))
		{
			printf("FizzBuzz");
		} else if ((pointer % 3) == 0)
		{
			printf("Fizz");
		} else if ((pointer % 5) == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", pointer);
		}
		if (pointer != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
