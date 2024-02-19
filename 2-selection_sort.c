#include "sort.h"
void selection_sort(int *array, size_t size)
{
	size_t index_min, i, j;
	int a;

	for (i = 0; i < size; i++)
	{
		index_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index_min])
			{
				index_min = j;
				continue;
			}
		}
		if (index_min != i)
		{
			a = array[index_min];
			array[index_min] = array[i];
			array[i] = a;
			print_array(array, size);
		}
	}
}
