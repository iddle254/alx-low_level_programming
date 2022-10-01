#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}


/**
 * main - a program that adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}
		printf("%d\n", sum);
	}
	return (EXIT_SUCCESS);
}
