#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Entry point
 * @n: first param
 * Description: prints times table for n
 * Return: null
 */
void print_times_table(int n)
{
	int r, c;
	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			printf("%d", r * c);
			while (c != n)
			{
				printf(", ");
			}
			_putchar('\n');
		}
	}
}
