#include <stdio.h>

int add_odd()
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
			printf("%d\n", sum);
		}
		i++;
	}
}
