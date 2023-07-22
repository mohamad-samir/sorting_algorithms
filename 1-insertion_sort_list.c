#include "sort.h"

/**
 * insertion_sort_list - Sorting Algorithm
 * @list: The doubly-linked list to be sorted.
 *
 * This is an insertion-sort algorithm for sorting a list of integers.
 *
 * Return: Nothing.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *to_be_sorted, *unsorted;

	/* Check if the list is empty or has only one element */
	if (!list || !(*list) || !(*list)->next)
		return;

	/* Start sorting from the second element in the list */
	unsorted = (*list)->next;

	while (unsorted)
	{
		to_be_sorted = unsorted;
		unsorted = unsorted->next;

		/* Iterate backwards through the sorted portion of the list */
		while (to_be_sorted->prev && (to_be_sorted->prev->n > to_be_sorted->n))
		{
			/* Join the previous node with the next node */
			to_be_sorted->prev->next = to_be_sorted->next;
			if (to_be_sorted->next)
				to_be_sorted->next->prev = to_be_sorted->prev;

			/* Move the to_be_sorted node one position to the left */
			to_be_sorted->next = to_be_sorted->prev;
			to_be_sorted->prev = to_be_sorted->prev->prev;

			/* Update the links of the adjacent nodes */
			to_be_sorted->next->prev = to_be_sorted;

			if (to_be_sorted->prev)
				to_be_sorted->prev->next = to_be_sorted;
			else
				*list = to_be_sorted;

			/* Print the current state of the list */
			print_list(*list);
		}
	}
}
