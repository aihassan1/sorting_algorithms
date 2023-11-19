#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size) 
{
size_t i, j;
int temp = 0;
int swapped;

for (j = 0; j < size - 1; j++)
{
swapped = 0;
for (i = 0; i < size - j - 1; i += 1)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
swapped = 1;
}
print_array(array, size);
}
if (swapped == 0)
break;
}
}
