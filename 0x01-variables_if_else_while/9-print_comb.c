#include <stdio.h>
/**
 * main - Beginning of the program
 * Return: Always 0 (Succesfully)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		{
			if (ch == '9')
				continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
