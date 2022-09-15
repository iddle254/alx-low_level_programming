#include "main.h"
#include <stdio.h>
/**
 * multiples - Entry point
 * Description: adds all multiples of 3 or 5 under 1024
 * Return: null
 */
void multiples(void)
{
	int curr_num = 3;
	int total_sum;

	while (curr_num < 1024)
	{
		if ((curr_num % 3 == 0) || (curr_num % 5 == 0))
		{
			total_sum += curr_num;
		}
		++curr_num;
	}
	printf("%d\n", total_sum);
}

int main(void)
{
	multiples();
	return (0);
}
