#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sorts an array of integers in ascending order using
 * the Shell sort algorithm with the Knuth sequence
 * @array: The array of integers to be sorted
 * @size: The size of the array
 *
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t i, j;
	int temp;

	/* Calculate the initial gap value using the Knuth sequence */
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				swap_ints(&array[j], &array[j - gap]);
				j -= gap;
			}

			array[j] = temp;
		}

		/* Print the array after each decrease in the gap */
		print_array(array, size);

		/* Update the gap value using the Knuth sequence */
		gap = (gap - 1) / 3;
	}
}
