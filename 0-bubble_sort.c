#include "sort.h"

/**
 * bubble_sort - sortsan array of integers
 * @array: the array to be sorted
 * @size: the sie of the array
 *
 * return: void
 */
void bubble_sort(int *array, size_t size);
{
	size_t i, n, new_n;
	int swap;

	if (array == NULL || size < 2)
		return;

	n = size:
	while(n > 0)
	{
		new_n = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				new_n = i + 1;
				print_array(array, size);
			}
		}
		n = new_n
	}
}
