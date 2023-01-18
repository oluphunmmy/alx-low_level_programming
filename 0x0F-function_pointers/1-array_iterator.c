#include "function_pointers.h"

/**
 * array_iterator - prints each array elem on a new1
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
