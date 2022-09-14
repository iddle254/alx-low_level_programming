#include <string.h>
/**
 * Main description goes here
 **/

int _putchar(char print_this[])
{
	int i;

	for (i = 0; i < strlen(print_this); i++)
	{
		putchar(print_this[i]);
	}
	return (0);
	
}
