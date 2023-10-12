#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - a variadic function
 *@n: argument count
 *@...: a list of parameters to be added
 *Return: 0 if n == 0, otherwise the sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
