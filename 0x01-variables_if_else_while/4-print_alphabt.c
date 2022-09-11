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
	char letter;

	for (i = 0; i < 27; i++)
	{
		letter = alphabet[i];
		switch (letter)
		{
			case 'e':
				continue;
			case 'q':
				continue;
			default:
				putchar(alphabet[i]);
				break;
		}
	}

	return (0);
}
