#include <stdio.h>
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: The string
 *
 * Return: Length of string
 */

void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);

	i = len - 1;
	while (i > 0)
	{
		printf("%c", s[i]);
		i--;
	}

	printf("\n");
}
