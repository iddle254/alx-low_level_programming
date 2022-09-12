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
	int i;
	char alphabet;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	alphabet = 'a';
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet ++;
	}
	putchar('\n');

	return (0);
}
