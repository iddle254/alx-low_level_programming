#include <string.h>
#include <stdio.h>
/**
 * Main description goes here
 **/

int _putchar(char print_this[])
{
	int i;

	for (i = 0; print_this[i] != '\0'; i++)
	{
		putchar(print_this[i]);
	}
	putchar('\n');
	return (0);
	
}
