#include <string.h>
#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s: pointer param
 * Description:  returns the length of a string
 * Return: int length
 */
int _strlen(char *s)
{
	int length = 0;

	for (length = 0; *s != '\0'; ++s)
		++length;
	return (length);
}
