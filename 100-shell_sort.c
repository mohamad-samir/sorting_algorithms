#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 * using Shell sort algorithm with Knuth sequence
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    size_t gap = 1;
    while (gap < size / 3)
        gap = gap * 3 + 1;

    while (gap > 0)
    {
        for (size_t i = gap; i < size; i++)
        {
            int temp = array[i];
            size_t j = i;

            while (j >= gap && array[j - gap] > temp)
            {
                array[j] = array[j - gap];
                j -= gap;
            }

            array[j] = temp;
        }

        print_array(array, size);
        gap = (gap - 1) / 3; /*Move to the next gap*/
    }
}
