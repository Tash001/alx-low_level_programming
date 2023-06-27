#include "main.h"
/**
 * _puts - to print a string followed by a new line
 * @s: string to be printed
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s++);
	}
	_putchar('\n');
}
