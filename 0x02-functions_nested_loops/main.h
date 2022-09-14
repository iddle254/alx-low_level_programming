#include <string.h>
#include <stdio.h>
/**
 * Main description goes here
 **/
int _putchar(char print_this[]);

int _putchar(char print_this[])
{
	int i, c;

	while ((c = getchar()) != '\n')
	{
		putchar(c);
	}
	return (0);
	
}
