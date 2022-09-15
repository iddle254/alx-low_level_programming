#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	char to_print[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(to_print[i]);
	}

	return (0);
}
