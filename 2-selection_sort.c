#include "sort.h"
/**
* swap - swaps two integers in the array.
* @a: pointer to the first integer.
* @b: pointer to the second integer.
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
* selection_sort -sorts array of int ascending order using the Selection sort.
* @array: The array of integers.
* @size: The size of the array.
*/
void selection_sort(int *array, size_t size)
{
size_t i, j;

for (i = 0; i < size - 1; i++)
{
size_t jMin = i;

for (j = i + 1; j < size; j++)
{
if (array[j] < array[jMin])
{
jMin = j;
}
}

if (jMin != i)
{
swap(&array[i], &array[jMin]);
}
}
}
