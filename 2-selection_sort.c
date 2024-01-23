#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - Sorts an array of integers in
 * ascending order
 * using the Selection sort algorithm.
 * 
 * @array: The array to be sorted.
 * @size: The size of the array.
 */

void selection_sort(int *array, size_t size)
{

size_t i, k;
size_t min_index;
int temp;

for (i = 0; i < size - 1; i++)
{
min_index = i;

for (k = i + 1; k < size; k++)
{
if (array[k] < array[min_index])
min_index = k;
}

if (min_index != i)
{
temp = array[i];
array[i] = array[min_index];
array[min_index] = temp;
print_array(array, size);
}
}
}
