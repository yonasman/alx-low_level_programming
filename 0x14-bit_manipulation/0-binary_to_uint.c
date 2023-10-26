#include "main.h"

/**
 *binary_to_unit - converts binary to unsigned int
 *@b: a binary char
 *
 *Return: unsigned int
 *
 * Long_Description: This function converts a given binary number
 * to equivalent decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = strlen(b);
	int i;

	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			result += 1 << (length - i - 1); /*left shifts the given binary number*/
		}
		else if ((b[i] != '0' || b[i] != '1') && b == NULL)
		{
			return (0);
		}
	}

	return (result);
}
