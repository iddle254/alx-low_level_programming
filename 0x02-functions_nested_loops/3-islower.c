#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: checks for lowercase letters
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	return 0;
}
