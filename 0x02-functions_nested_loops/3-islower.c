#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: checks for lowercase letters
 * Return: 1 if lowercase 0 otherwise
 * '@parameter' - c
 */
int _islower(int c)
{
	int check = c;

	if (islower(check))
	{
		return (1);
	}
	return (0);
}
