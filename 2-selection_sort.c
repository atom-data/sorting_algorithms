#include "sort.h"

/**
 * swap - switch values of variables
 *
 * @ptr1: address of the first variable
 * @ptr2: address of the second variable
 */
void swap(int *ptr1, int *ptr2)
{
	int  tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

/**
 * selection_sort - sort an array using selection sort
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_index])
				min_index = j;
		if (min_index != i)
		{
			swap((array + i), (array + min_index));
			print_array(array, size);
		}
	}
}
