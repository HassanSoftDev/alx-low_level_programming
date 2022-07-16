#include <stdio.h>

/**
 * print_array - print n element of an array of integers
 * @a: int type an array pointer
 * @n: int type integer
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
