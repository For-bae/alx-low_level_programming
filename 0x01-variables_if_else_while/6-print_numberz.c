#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0;
	while (n < 10)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
