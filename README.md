# Sorting Algorithms

Implementation of sorting algorithms in C.

## **Insertion Sort**

In this code, the insertion_sort_list function implements the insertion sort algorithm to sort a doubly linked list. Here's a summary of the main steps:

1. Check if the list is empty or has only one element. If so, there's nothing to sort, so return.
2. Start sorting from the second element in the list.
3. Iterate through the unsorted portion of the list.
4. For each element in the unsorted portion, compare it with the elements in the sorted portion (iterate backwards).
5. If the element is smaller than the previous element, swap it with the previous element by adjusting the links.
6. Continue swapping until the element is in its correct sorted position.
7. Update the head of the list if necessary.
8. Print the current state of the list after each swap.
9. The comments provide additional explanations for each step in the code.

## **Quick Sort**

In this code, I implemented the quick sort algorithm using recursion. SInce we are meant to print the whole array after each swap, I created another function and added the original array pointer and the original array size as parameters so that it can be used to print the whole array after each swap in any of the recursive call.

The code implements the quicksort algorithm recursively to sort an integer array in ascending order. Let's go through the code step by step:

1. The function `quick_sort_recurse` is defined, which takes in four parameters:

   * `array`: a pointer to the array to be sorted
   * `size`: the size of the array
   * `o_array`: a pointer to the original array (used for printing purposes)
   * `o_size`: the size of the original array

2. Before performing any sorting, the code checks for two base cases:

   * If the `array` is `NULL`, indicating an empty array, or if the `size` of the array is less than 2, meaning it contains only one element or no elements, the function returns, as no sorting is required.

3. The variable declarations follow:

    * `cursor_idx`: the index of the current element being considered
    * `pivot_idx`: the index of the pivot element (set as the last element initially)
    * `swap_idx`: the index of the last element smaller than or equal to the pivot (initialized to -1)
    * `hold`: a temporary variable used for swapping elements
    * `left_size`: the size of the left subarray (elements smaller than the pivot)
    * `right_size`: the size of the right subarray (elements greater than the pivot)

4. The code enters a while loop that iterates from the `cursor_idx` to the `pivot_idx` inclusive.

5. Within the loop, it compares the element at the `cursor_idx` with the pivot element (the element at `pivot_idx`).

6. If the current element is smaller than or equal to the pivot, it means it should be moved to the left subarray. The code increments `swap_idx` and performs the swap between the current element and the element at the `swap_idx` index. This places the smaller element to the left of the pivot.

7. After the swap, the print_array function is called to print the intermediate state of the array (presumably for debugging or visualization purposes).

8. The `cursor_idx` is incremented to move to the next element.

9. Once the while loop finishes, the code determines the sizes of the left and right subarrays:

    * `left_size` is set as the value of `swap_idx`, which represents the index of the last element smaller than or equal to the pivot.
    * `right_size` is calculated as the difference between the size of the array and the `swap_idx` + 1 index, representing the number of elements greater than the pivot.

10. The `quick_sort_recurse` function is called recursively twice:

    * The first recursive call sorts the left subarray from index 0 to `left_size`.
    * The second recursive call sorts the right subarray from index `swap_idx` + 1 to `swap_idx` + 1 + `right_size`.

11. The function ends, and the sorting process continues recursively until all subarrays have been sorted.

Overall, the code partitions the array based on a pivot element and recursively sorts the resulting subarrays. This process continues until the base cases are reached, resulting in a fully sorted array.
