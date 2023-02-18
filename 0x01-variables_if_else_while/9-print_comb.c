#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	char *s10 = "0123456789";
	int n = 0;

	while (n < 10)
	{
		putchar(s10[n]);
		if(n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
