#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - prints name
 *@name: string to be added
 *@f: a pointer to function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
