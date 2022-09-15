#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * Parameter - c
 * Description: checks for lowercase letters
 * Return: 1 if lowercase 0 otherwise
 */
int _isalpha(int c)/*@parameters - c*/
{
	int check_c = isalpha(c);/*@parameters - c*/

	if (check_c)
	{
		return (1);
	}
	return (0);
}
