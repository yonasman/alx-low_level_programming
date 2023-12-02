#include "main.h"

int print_last_digit(int n)
{
	int k;
	k = n % 10;

	if (k < 0)
	{
		k = k * -1;
	}

	_putchar(k + '0');
	return (k);
}
