#include <stdarg.h>
#include <stdio.h>
#include "main.h"
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
	/*code goes here*/



	/*clean up*/
	va_end(ap);
	printf("\n");
}
