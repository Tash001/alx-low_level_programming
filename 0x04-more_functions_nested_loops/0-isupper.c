#include "main.h"

/**
 * _isupper - check if a character is digit
 * @x: The number to be checked
 * Return: 1 for an uppercase character 0 for anything else
 *
 */
int _isupper(int x)
{
	if (x >= 57 && x <= 90)
	{
	return (1);
	}
	return (0);
}
