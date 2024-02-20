#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - recursivley sorts a given array
 * @array: pointer to the array to be sorted
 * @size: size or length of the array
 * Return: void
 */


void quick_sort(int *array, size_t size)
{
        int l, h, j;
        l = 0
        h = size - 1;

        if (l < h)
        {
                j = partition(array, l, h);
                quick_sort(array, l, j);
                quick_sort(array, j + 1, h);
        }
}
