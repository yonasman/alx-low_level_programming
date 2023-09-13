#include "main.h"

/**
 * isalpha - check for a letter, lowercase or uppercase
 *@c - a char to be checked
 *Return: 1 if it is one of them 0 otherwise
 */
int isaplha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
	  )
{
	return (1);
}
	return (0);
}
