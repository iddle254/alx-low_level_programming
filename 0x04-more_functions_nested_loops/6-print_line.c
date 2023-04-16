#include "main.h"
#include <stdio.h>
/**
 * print_line - print line
 * @n: param 1
 * Description: a function that prints a line n long
 * Return: null
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
