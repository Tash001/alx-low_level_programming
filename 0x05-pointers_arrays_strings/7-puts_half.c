#include "main.h"
/**
 * puts_half - prints the half part of the string
 * @str: The string to be rpinted as output
 * Return: return void always
 */
void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[y] != '\0')
	{
		y++;
	}
		if (x % 2 == 1)
		{
			y = (x = 1) / 2;
			y += 1;
		}
		else
		{
			y = x / 2;
		}
		for (; y < x; y++)
		{
			_putchar(str[y]);
		}
		_putchar('\0');
}
