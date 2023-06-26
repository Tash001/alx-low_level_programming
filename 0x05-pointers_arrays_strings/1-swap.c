#include "main.h"
/**
 * swap_int swaps the values of two integers
 * @i: the value to swap
 * @j: the value ti swap with
 */
void swap_int(int *i, int *j)
{
	int x;

	x = *i;
	*i = *j;
	*j = x ;
}
