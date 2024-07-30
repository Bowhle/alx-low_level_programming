#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: pointer to the function to execute on each element
 *
 * Description: This function takes an array, its size, and a function pointer
 * as parameters. It applies the function pointed to by action to each element
 * of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
