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
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * lomuto_Partition - Lomuto partition scheme implementation.
 * @array: Array to be partitioned
 * @low: Starting index of the array
 * @high: Ending index of the array
 *
 * Return: Index of the pivot after partitioning
 */
int lomuto_Partition(int array[], int low, int high)

{
    int i, j;
    int pivot = array[high];
    i = low - 1;
    

    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[j], &array[i]);
        }
    }
    swap(&array[i + 1], &array[high]);
    
    return (i + 1);
}

/**
 * quick_sort - Quick sort algorithm implementation.
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
    int middle_pivot;
    int low = 0;

    if (array == NULL || size < 2)
        return;
    middle_pivot = lomuto_Partition(array, low, size - 1);

    quick_sort(array, middle_pivot);
    quick_sort(array + middle_pivot + 1, size - 1 - middle_pivot);
}
