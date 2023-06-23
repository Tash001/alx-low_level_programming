#include "main.h"
/**
 * print_numbers - print numbers 0 to 9
 * Return: the numbers  from o upto 9
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	}
	putchar('\n');
}

