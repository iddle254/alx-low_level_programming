#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks to see if c is cased
 * @c: char to be checked
 * Description: CHecks the case of c
 * Return: int-0 or 1
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
