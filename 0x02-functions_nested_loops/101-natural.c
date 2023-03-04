#include "main.h"
#include <stdio.h>

/**
 * _natural - prints nat number's sum up to 1024
 *
 * Returns: void
 */

void _natural(void)
{
	/**
	 * @z: the count
	 * @n: the sum
	 */

	int z;
	int n;

	z = 0;
	n = 0;

	while (z < 1024)
	{
		if (z % 3 == 0)
		{
			n = n + z;
		}
		else if (z % 5 == 0)
		{
			n = n + z;
		}
		z++;
	}
	printf("%d\n", n);
}
