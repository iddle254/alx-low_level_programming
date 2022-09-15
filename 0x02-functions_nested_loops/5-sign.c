#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - Entry point
 * @n: integer to check
 * Description: prints the sign of a number
 * Return: 1 if greater than 0, 0 if 0, -1 otherwise
 */
int print_sign(int n)
{
	switch (n)
	{
		case n > 0:
			_putchar('+');
			return (1);
			break;
		case n == 0:
			_putchar(0);
			return (0);
			break;
		default:
			_putchar('-');
			return (-1);
			break;
	}
}
