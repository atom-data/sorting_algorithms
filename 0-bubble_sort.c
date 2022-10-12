#include "sort.h"

/**
 * swap - swap two entities
 *
 * @ptr1: the address of first variable
 * @ptr2: the address of the second variable
 *
 * Return: Nothing
 */
void swap(int *ptr1, int *ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

/**
 * bubble_sort - sort array using Bubble sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array to sort
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap((array + j), (array + j + 1));
				print_array(array, size);
			}
}
