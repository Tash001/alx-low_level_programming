#include "main.h"
#include <stdio.h>
/**
 * print_array - prints all the elements of an arrayof integer value
 * @a: Array of integers
 * @n: Number of integers to be printed in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
