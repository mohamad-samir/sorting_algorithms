#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	size_t gap, i, j;

	/* Calculate the initial gap using Knuth's sequence */
	for (gap = 1; gap < size / 3;)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		/* Perform insertion sort with the current gap */
		for (i = gap; i < size; i++)
		{
			int current_element = array[i];
			j = i;

			/* Shift elements to the right to create space for insertion */
			while (j >= gap && array[j - gap] > current_element)
			{
				array[j] = array[j - gap];
				j -= gap;
			}

			/* Insert the current element into the correct position */
			array[j] = current_element;
		}

		/* Print the array after each pass */
		print_array(array, size);
	}
}
