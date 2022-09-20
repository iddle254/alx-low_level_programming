#include <string.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer param
 * Description: prints a string, followed by a new line, to stdout
 * Return: null
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		++str;
	}
	_putchar('\n');
}
