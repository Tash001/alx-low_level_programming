#include "main.h"
/**
 * puts2 -prints every chacter of a string beginning with the first character
 * @str: The string to be output
 * Return: void always
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
