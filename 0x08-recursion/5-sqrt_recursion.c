#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the square root of a given number
 * @n: number given to calculate the square root
 * Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
