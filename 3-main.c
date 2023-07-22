#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array1[] = {3, 2, 5, 0, 1, 8, 7, 6, 9, 4};
    int array2[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n1 = sizeof(array1) / sizeof(array1[0]);
    size_t n2 = sizeof(array2) / sizeof(array2[0]);

    printf("################### Sorting Array 1 #####################\n");
    print_array(array1, n1);
    printf("\n");
    quick_sort(array1, n1);
    printf("\n");
    print_array(array1, n1);

    printf("\n");
    printf("\n");

    printf("################### Sorting Array 2 #####################\n");
    print_array(array2, n2);
    printf("\n");
    quick_sort(array2, n2);
    printf("\n");
    print_array(array2, n2);
    return (0);
}