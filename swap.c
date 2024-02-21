#include <stdio.h>

/**
 * swap - This function swaps two elements
 * @x: the first element
 * @y: the second element
 *
 * Return - void
 */
void swap(int *x, int *y)
{
	int *temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
