#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks to see if c is a digit
 * @c: char to be checked
 * Description: CHecks the case of c
 * Return: int-0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
