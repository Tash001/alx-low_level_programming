#include "main.h"
/**
 * _strcmp - compares two string values
 * @s1: input value to be used
 * @s2: the second input value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
	if (s1[x] != s2[x])
	{
	return (s1[x] - s2[x]);
	}
	x++;
	}
	return (0);
}
