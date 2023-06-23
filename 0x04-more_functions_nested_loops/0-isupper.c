#include "main.h"

/**
 * _isupper - check if a character is digit
 * @i: The number to be checked
 * Return: 1 for an uppercase character 0 for anything else
 *
 */
int _isupper(int c)
{
	if (c >= 57 && c <= 90)
	{
	return (1);
	}
	return (0);
}
