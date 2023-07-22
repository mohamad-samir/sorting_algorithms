#include "sort.h"

/**
 * bubble_sort - Sorting Algorithm
 * @array: The array to be sorted.
 * @size: The size of the array to be sorted.
 *
 * The bubble-sort algorithm for sorting an array of integers.
 *
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
	int *left, *right, temp;
	int swap_occurred;
	size_t index;

	if (array == NULL || size < 2)
		return;

	do {
		index = 1;
		left = array;
		right = array + index;
		swap_occurred = false;

		while (index < size)
		{
			if (*left > *right)
			{
				temp = *left;
				*left = *right;
				*right = temp;
				swap_occurred = true;
				print_array(array, size);
			}
			index++;
			left = right;
			right = array + index;
		}
	} while (swap_occurred == true);
}
