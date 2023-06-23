#include "main.h"

/**
 * _isdigit - check if a character is digit
 * @x: The number to be checked
 * Return: 1 for an uppercase character 0 for anything else
 *
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
