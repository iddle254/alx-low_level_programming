#include <string.h>
#include <stdio.h>
/**
 * Main description goes here
 **/
int _putchar(char print_this[]);

int _putchar(char print_this[])
{
	int i, c;

	for (i = 0; (c = getchar()) != '\n', i++)
	{
		putchar(print_this[i]);
	}
	return (0);
	
}
