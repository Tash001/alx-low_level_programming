#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a given number
 * @n: number given to calculate the square root
 * Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actusl_sqrt_recursion(n, 0));
}
