#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_numbers - a variadic function that return numbers
 *@separator: a string to be printed between numbers
 *@n: the number of integer passed to the function
 *@...: a variable number of parameters to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for ( i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));

		if (i != (n - 1) && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}

