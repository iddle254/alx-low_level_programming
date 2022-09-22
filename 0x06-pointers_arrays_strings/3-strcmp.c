#include "main.h"
/**
 * *_strcmp - compares two srings
 * @s1: param1
 * @s2: param2
 * Description: complares two strings
 * return: 0 if they match
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
