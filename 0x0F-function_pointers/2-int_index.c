#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - a function that searches for an int
 *@array: a pointer to an array
 *@size: size of the array
 *@cmp: a pointer to a function
 *Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

