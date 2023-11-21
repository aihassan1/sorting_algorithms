#include "sort.h"

/**
* swap - Swaps the values of two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Return: None.
*/
void swap(int *a, int *b);

/**
* bubble_sort - Sorts an array of integers in ascending order
* using the Bubble sort algorithm.
* @array: The array to be sorted.
* @size: The size of the array.
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j;
bool swapped;

if (array == NULL || size < 2)
return;

for (j = 0; j < size - 1; j++)
{
swapped = false;
for (i = 0; i < size - j - 1; i += 1)
{
if (array[i] > array[i + 1])
{
swap(&array[i], &array[i + 1]);
swapped = true;
print_array(array, size);
}
}
if (!swapped)
break;
}
}

/**
* swap - Swaps the values of two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Return: None.
*/
void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
