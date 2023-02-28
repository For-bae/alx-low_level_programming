#include <string.h>

/**
 * puts2 - prints every other string character
 * @s: The string
 *
 * Return: string
 */

void puts2(char *s)
{
	int i, len;

	len = strlen(s);
	i = 0;

	while (i < len)
	{
		if (i % 2 == 0)
		{
			printf("%c", s[i]);
		}
		i++;
	}
	printf("\n");
}
