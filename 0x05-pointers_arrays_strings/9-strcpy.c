#include "main.h"
/**
 * *_strcpy- copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer param to store
 * @src: pointer param to be copied
 * Description: copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int buffer, counter;

	for (counter = 0; src[counter] != '\0'; ++counter)
	{
		dest[buffer] = src[counter];
		++buffer;
	}
	dest[buffer] = '\0';
	return (*dest);
}
