#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0-9
 * Description: print from 0-9 except 2 and 4
 * Return: null
 */
void print_most_numbers(void)
{
	int count;

	count = 0;
	while (count < 10)
	{
		if ((count == 2) || (count == 4))
		{
			continue;
		}
		_putchar(count + '0');
		count++;
	}
	_putchar('\n');
}
