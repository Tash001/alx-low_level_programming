#include "main.h"
/**
 * _strlen_recursion - This one wil Return the length of a string.
 * @s: This is the string to be displayed
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
