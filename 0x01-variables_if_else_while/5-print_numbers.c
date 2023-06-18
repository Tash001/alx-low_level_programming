#include <stdio.h>
/**
 * main - Beginning of the program
 * Return: Always 0 (Succesfully)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
