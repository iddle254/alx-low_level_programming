#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: pointer param
 * Description: 
 * n that prints half of a string, followed by a new line
 * Return: null
 */
void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; ++length)
		;
	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	
	_putchar('\n');
	}
	else
	{
		for (i = (length - 1) / 2; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
