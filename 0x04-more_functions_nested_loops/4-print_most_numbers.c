#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 through 9
 * desc: exclude 2 and for from the numbers
 * Return: the numbers from 0 until 9
 */

void print_most_numbers(void)
{
	int i;

	for (; i <= 9; i++)
	{
	if (i == 2 || i == 4)
	{
	continue;
	}
	else
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}

