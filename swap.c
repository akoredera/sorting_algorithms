#include <stdio.h>

/**
 * swap - This function swaps two elements
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
