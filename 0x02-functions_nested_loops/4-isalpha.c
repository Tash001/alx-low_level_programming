#include "main.h"

/**
 * _isalpha -checks for alphabetic characters
 * @c: This is the character to be checked
 * Return: 0 for alphabetic character 1 for something else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
