#include "main.h"
/**
  * _memset - main function of the prototype
  *
  * @b: value to be filled
  *
  * @s: Function paramater
  *
  * @n: Function parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	s[j] = b;
	return (s);
}
