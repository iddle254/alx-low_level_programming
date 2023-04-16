#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number to calculate
 * Description: prints the last digit of a number
 * Return: last number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
		_putchar('0' + last_digit);
		return (last_digit);
	}

	last_digit = abs(n) % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
