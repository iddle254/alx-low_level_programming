#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number to calculate
 * Description: prints the last digit of a number
 * Return: last number
 */
int print_last_digit(int n)
{
	if (n > 10)
		return (n % 10);
	return (n);
}
