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
	int counter, to_becopied, next_counter;

	for (counter = 0; dest[counter] != '\0'; ++counter)
	{
		;
	}
	for (to_becopied = 0; to_becopied < n && src[to_becopied] != '\0'; ++to_becopied)
	{
		next_counter = ++counter;
		dest[next_counter] = src[to_becopied];
	}
	dest[next_counter] = '\0';
	return (dest);
}
