#include <stdio.h>
#include "sort.h"

int partition(int arr[], int l, int h)
{
	int pivot = arr[l];

	int i, j;
	i = l;
	j = h;

	while (i < j)
	{
		while (arr[i] <= pivot)
		{
			i++;
		}
		while (arr[j] >= pivot)
		{
			j--;
		}
		if (i < j)
		{
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[l], arr[j]);
	return j;
}
