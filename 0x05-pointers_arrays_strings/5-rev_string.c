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
	int i, length = 0;
	char ch;

	while (s[length] != '\0')
	{
		++length;
	}
	for (i = 0; i < length; ++i)
	{
		ch = s[1];
		s[i] = s[length - 1 - i];
		s[length -1 - i] = ch;
	}
}
