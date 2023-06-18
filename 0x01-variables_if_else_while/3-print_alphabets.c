#include <stdio.h>
/**
 * main - Beginning of the program
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
		putchar(' ');
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar(' ');
	}
	putchar('\n')
	return (0);
}

