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
	char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'
		, 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < 27; i++)
		putchar(alphabet[i]);

	return (0);
}
