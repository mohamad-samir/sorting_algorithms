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
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 */
void bubble_sort(int array[], size_t size)
{
	bool swapped = true;
	size_t i, j;

	if (array == NULL || size < 2)
	{
		return;
	}

	do {
		swapped = false;

		for (int j = 0; j < (size - 1 - i); j++)
		{
			if (a[j] < a[j + 1])
			{
				swap_ints(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = true;
			}
		}
		i++;
	} while (swapped);
}
