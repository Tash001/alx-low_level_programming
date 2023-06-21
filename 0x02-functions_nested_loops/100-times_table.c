#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: the value to be printed
 * Starting with 0.
 */

void print_times_table(int n)
{

	int num, i, p;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (i = 1; i <= n; i++)
	{
	_putchar(',');
	_putchar(' ');
	p = num * i;
	if (p <= 99)
	_putchar(' ');
	if (p <= 9)
	_putchar(' ');
	if (p >= 100)
	{
	_putchar((p / 100) + '0');
	_putchar(((p / 10) % 10) + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
	}
}

