#include <string.h>
#include <stdio.h>
/**
 * Main description goes here
 **/
int _putchar(char);

int _putchar(char)
{
	int c;

	while ((c = getchar()) != '\n')
	{
		putchar(c);
	}
	return (0);
	
}
