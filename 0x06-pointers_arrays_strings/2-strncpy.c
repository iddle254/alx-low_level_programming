#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: copy here
 * @src: copy this
 * @n: characters to copy
 * Description: copies a string
 * return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int buffer = 0, counter;

	for (counter = 0; counter < n && src[counter] != '\0'; ++counter)
	{
		dest[buffer] = src[counter];
		++buffer;
	}
	dest[buffer] = '\0';
	return (dest);
}
