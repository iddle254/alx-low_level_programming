#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - a function that produces output according to a format.
 *
 * @format: character string. composed of zero or more
 *          directives(c, s, %)
 * @...: additional flags
 *
 * Return: the number of characters printed
 *         (excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...){
    va_list ap;
    /*initialize index*/
    unsigned int index;
    /*memory to allocate*/
    unsigned int format_length = malloc(sizeof(format) + 1)
    /* initialize the argument list from the start */
	va_start(ap, format_length);

	/* iterate through each argument*/
	for (index = 0; index < format_length; index++)
	{
	    /*code goes here*/

	}
	/*clean up*/
	va_end(ap);
	free(index, format_length)
	printf("\n");
}
