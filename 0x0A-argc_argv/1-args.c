#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 *        passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
<<<<<<< HEAD
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
=======
	/**
	*int i = 0, m;
    *
	*while (i < argc)
	*{
	*	m = i;
    *    i++;
	*}
	*/

	printf("%d\n", argc);
>>>>>>> c0b5de6380acd96a3600f256cfaf16575f87aae0
	return (EXIT_SUCCESS);
}
