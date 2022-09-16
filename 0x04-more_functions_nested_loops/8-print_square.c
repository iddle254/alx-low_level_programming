#include "main.h"
#include <stdio.h>
/**
 * print_square - print square
 * @size: param 1
 * Description: a function that prints a square
 * Return: null
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}	
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
