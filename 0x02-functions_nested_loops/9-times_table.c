#include "main.h"
/**
 * times_table - Entry point
 * Description: prints the 9 times table
 * Return: null
 */
void times_table(void)
{
	int row, col, product, fd, ld;

	for (row = 0; row < 10; ++row)
	{
		for (col = 0; col < 10; ++col)
		{
			product = row * col;
			if (product > 10)
			{
				fd = product / 10;/*first digit*/
				ld = product % 10; /*last digit*/
			} else 
			{
			_putchar(product + '0');
			}
			_putchar(fd + '0');
			_putchar(ld + '0');
			while (col != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
