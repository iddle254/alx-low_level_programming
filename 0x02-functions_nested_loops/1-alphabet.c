#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints a_z
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
}
