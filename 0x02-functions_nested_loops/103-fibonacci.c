#include <stdio.h>
/**
 * main - prints the sum of fibonacci numbers
 * less than four million
 * Return: 0 Always
 */
int main(void)
{
	int x = 0;
	long y = 1, k = 2, sum = k;

	while (k + y < 4000000)
	{
		k += y;
		if (k % 2 == 0)
		sum += k;
		y = k - y;
		++x;
	}
	printf("%ld\n", sum);
	return (0);
}
