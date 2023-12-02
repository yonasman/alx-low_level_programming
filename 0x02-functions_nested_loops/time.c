#include "main.h"

void times_table(void)
{
	int rows, colums, one, tens, product;

	for (rows = 0; rows <= 9; rows++)
		{
			for (colums = 0; colums <= 9; colums++)
				{
					product = rows * colums;
					one = product % 10;
					tens = product / 10;
					if (colums ==  0)
					{
						_putchar('0');
					}
					else if (product < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(one + '0');
					}
					else
					{	_putchar(',');
						_putchar(' ');
						_putchar(one + '0');
						_putchar(tens + '0');
					}
				}
			_putchar('\n');
		}
}
