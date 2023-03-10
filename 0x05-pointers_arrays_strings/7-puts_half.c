#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints second half of a string
 * @s: The string
 *
 * Return: string
 */

void puts_half(char *s)
{
	int n, len;

	len = strlen(s);
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		n = n + 1;
	}
	else
	{
		n = len / 2;
	}

	while (n < len)
	{
		printf("%c", s[n]);
		n++;
	}
	printf("\n");
}
