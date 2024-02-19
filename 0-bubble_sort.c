/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: NULL
 */
#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int a;
	bool swapped = true;

	while (swapped)
	{
		swapped = false;
		for (i = 1; i <= size; i++)
		{
			if (array[i - 1] > array[i])
			{
				a = array[i - 1];
				array[i - 1] = array[i];
				array[i] = a;
				swapped = true;
				print_array(array, size);
			}
		}
	}
}
