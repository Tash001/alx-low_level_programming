#include <stdio.h>
/**
 * main - Beginning of the program
 * Return: Always 0 (Succesfully)
 */
int main(void)
{
	char(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
