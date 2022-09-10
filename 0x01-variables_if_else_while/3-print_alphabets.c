#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 * Description: 'Prints text using printf'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'
		, 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char upper_case;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	for (i=0; i < 26; i++)
	{
		upper_case = toupper((unsigned char) alphabet[i]);
		putchar(upper_case);
	}
	return (0);
}
