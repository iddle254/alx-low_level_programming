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
	unsigned char i;

	for (i = '0'; i <= 'f'; i++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
