#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers from 0-9
 * Description: print from 0-9
 * Return: null
 */
void print_numbers(void)
{
	int count;

	count = 0;
	while (count < 10)
	{
		_putchar(count + '0');
		++count;
	}
	_putchar('\n');
}
