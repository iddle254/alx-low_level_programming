#include "main.h"
/**
 * string_toupper - a function that changes all
 * lowercase letters of a string
 * to uppercase.
 * @s: pointer to input char
 * Description: Write a function that reverses the
 * content of an array of integers
 * Return: @s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);

}
