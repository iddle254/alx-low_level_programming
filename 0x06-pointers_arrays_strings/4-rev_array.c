#include "main.h"
/**
 * reverse_array - Write a function that reverses the
 * content of an array of integers
 * @a: param1
 * @n: param2
 * Description: Write a function that reverses the
 * content of an array of integers
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
