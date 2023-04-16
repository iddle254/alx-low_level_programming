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
	char  i;

	for (i = 'a'; i <= 'z'; i++)
	{
		switch (i)
		{
			case 'e':
				continue;
			case 'q':
				continue;
			default:
				putchar(i);
				break;
		}
	}
	putchar('\n');

	return (0);
}
