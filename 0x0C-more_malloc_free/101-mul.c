#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _length - get the length of strings
 *
 * @str: string to get length of
 *
 * Return: length of string
*/
int _length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}


/**
 * multiply - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
*/

void multiply(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);

	/* store our pointer address to free later */
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 *
 * Description: a program that multiplies
 *            two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success 98 on faliure
*/

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
