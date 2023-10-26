#include "main.h"

/**
 *_putchar - a function that brings a char to stdout
 *@c: a char to be printed
 *
 * Return: a char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
