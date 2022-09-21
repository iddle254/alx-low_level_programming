#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: copied here
 * @src: copy this
 * @n: most bytes to be used by src
 * Description: cat two strings
 * Return - pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter, to_becopied;

	for (counter = 0; dest[counter] != '\0'; ++counter)
	{
		;
	}
	for (to_becopied = 0; to_becopied < n && src[to_becopied] != '\0'; ++to_becopied)
	{
		dest[counter + to_becopied] = src[to_becopied];
	}
	dest[counter + to_becopied] = '\0';
	return (dest);
}
