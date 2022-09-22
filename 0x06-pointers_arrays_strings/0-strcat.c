#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: copied here
 * @src: copy this
 * Description: cat two strings
 * Return - pointer to resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
