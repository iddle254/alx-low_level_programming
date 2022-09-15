#include "main.h"
/**
 * times_table - Entry point
 * Description: prints the 9 times table
 * Return: null
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row < 10; ++row)
	{
		for (col = 0; col < 10; ++col)
		{
			product = row * col;
			_putchar(product);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
