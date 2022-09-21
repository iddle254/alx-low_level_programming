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
	int counter;

	for (counter = 0; dest[counter] != '\0'; ++counter)
	{
		;
	}
	for (to_becopied = 0; src[to_becopied] != '\0'; ++to_becopied)
	{
		next_counter = ++counter;
		dest[next_counter] = src[to_becopied];
	}
	return (dest);
}
