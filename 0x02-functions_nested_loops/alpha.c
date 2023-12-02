#include "main.h"

/**
 *print_alphabet - a function that prints alphabet
 *
 *Return: nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
  		_putchar(c);
	}
	_putchar('\n');
	return;
}
