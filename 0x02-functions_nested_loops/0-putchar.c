#include "main.h"
#include <string.h>
/**
 * main - Entry point
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	char to_print[] = "_putchar";
	int i;
	int len = strlen(to_print);

	for (i = 0; i < len; i++)
	{
		_putchar(to_print[i]);
	}

	return (0);
}
