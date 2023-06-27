#include "main.h"
/**
* _strcpy - Copy a string to dest
* @dest: Va;ue of the destination
* @src: Source value
* Return: This is the pointer to the dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
