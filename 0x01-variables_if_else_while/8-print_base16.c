#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	char *b16 = "0123456789abcdef";
	int n = 0;

	while (n < 16)
	{
		putchar(b16[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
