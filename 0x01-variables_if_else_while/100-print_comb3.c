#include <stdio.h>
/**
 * main - Beginning of the program
 * Return: Always 0 (Succesfully)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
	for (j = 1 + 1; j <= '9'; j++)
	{
	if (j != i)
	{
	putchar(i);
	putchar(j);
	if (i == '8' && j == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
