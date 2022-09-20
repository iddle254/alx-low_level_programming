#include <string.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse, followed by a new line, to stdout
 * @s: pointer param
 * Description: prints a string in reverse, followed by a new line, to stdout
 * Return: null
 */
void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		++length;
	}
	for (--length; length >= 0; --length)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
