#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: first param
 * Description: prints from n to 98 
 * Return: null
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d",n);
		if (n > 98)
			--n;
		else if (n < 98)
			++n
	}
}
