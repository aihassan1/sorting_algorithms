#include "sort.h"
/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function swaps the values of two integers
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order using the    
 *                  Selection sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: sorts an array of integers in ascending order using
 *              the Selection sort algorithm
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	for (i = 0; i < size; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
