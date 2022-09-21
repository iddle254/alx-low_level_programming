#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 * Description: 'Prints text using printf'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			break;
		}
		for (j = 1; j < i; j++)
		{
			if (i == j)
				continue;
			else
			{
				putchar(i + '0');
				putchar(j + '0');
			}
		
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
