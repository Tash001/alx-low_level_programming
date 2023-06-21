#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers series
 * Return: Nothing here
 */
int main(void)
{
	int x;
	long y, k = 2;

	while (x < 50)
	{
	if (x == 0)
	printf("%ld", y);
	else if (x == 1)
	printf(", %ld", k);
	else
	{
	k += y;
	y = k - y;
	printf(",%ld", k);
	}
	++x;
	}
	printf("\n");
	return (0);
}
