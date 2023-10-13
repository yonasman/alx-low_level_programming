#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - a variadic function that print strings
 *@separator: the string to be printed between the strings
 *@n: the number of strings passed to the function
 *@...: the list of parameter to be printed
 *
 * Return: strings
 * Description: if the separator is, it's not printed out
 * and if one of the strings is null nil is printed out
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
