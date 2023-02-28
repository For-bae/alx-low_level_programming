#include <stdio.h>
#include <string.h>

/**
 * print_array - prints formatted elements of integer array
 * @a: The array
 * @n: The length of array
 *
 * Return: string
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
