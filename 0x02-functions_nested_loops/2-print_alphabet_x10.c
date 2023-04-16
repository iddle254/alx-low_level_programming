#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints a_z
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int times = 0;

	while (times < 10)
	{
		letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
	++times;
	}
}
