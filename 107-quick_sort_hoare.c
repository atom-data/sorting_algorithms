#include "sort.h"
#include <stdbool.h>

/**
 * swap - switch values between two variables
 *
 * @ptr1: address of the first variable
 * @ptr2: address of the second variable
 */
void swap(int *ptr1, int *ptr2)
{
	int tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

/**
 * partition -  sort an array about a pivot
 *
 * @array: the array of data
 * @size: size of the array
 * @low: starting index
 * @high: ending index
 *
 * Return: index of pivot in sorted array
 */
size_t partition(int *array, size_t size, int low, int high)
{
	int i, j, pivot;

	i = low - 1;
	j = high + 1;
	pivot = array[low];
	while (true)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i >= j)
			return (j);
		swap((array + i), (array + j));
		print_array(array, size);
	}
}

/**
 * qsort - implementation of quicksort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 * @low: starting index
 * @high: ending index
 */
void qsort(int *array, size_t size, int low, int high)
{
	int p_index;

	if (low < high)
	{
		p_index = partition(array, size, low, high);
		qsort(array, size, low, p_index);
		qsort(array, size, p_index + 1, high);
	}
}

/**
 * quick_sort_hoare - sorting array using the quicksort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	int low, high;

	if (array == NULL || size < 2)
		return;
	low = 0;
	high = (int)size - 1;
	qsort(array, size, low, high);
}
