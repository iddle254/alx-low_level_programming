#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: copied here
 * @src: copy this
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[0] = src[i];
	}
	return (dest);
}
