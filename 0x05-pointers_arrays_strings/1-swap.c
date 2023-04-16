#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer param
 * @b: pointer param
 * Description: swaps the values of two integers
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
