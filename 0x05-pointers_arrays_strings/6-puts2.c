#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: pointer param
 * Description: prints every other character of a string, starting
 * with the first character, followed by a new line.
 * Return: null
 */
void puts2(char *str)
{
	int length = 0;

	for (length = 0; str[length] != '\0'; length += 2)
	{
		_putchar(str[length]);
		if (str[length + 1] == '\0')
			break;
	}
	_putchar('\n');
}
