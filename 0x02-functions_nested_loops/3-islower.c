#include "main.h"

/**
 * _islower - checks for lower case characters
 * Return: 0 for lowercase character 1 for something else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
