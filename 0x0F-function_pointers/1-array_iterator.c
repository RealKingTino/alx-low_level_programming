#include "function_pointers.h"
#include <stdio.h>
/*
 * array_iterator - applies a function to each element of an array
 * @array: pointer to the array to be iterated over
 * @size: size of the array
 * @action: pointer to the function to be each element of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
	}

}
