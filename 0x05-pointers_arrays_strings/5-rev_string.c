#include <string.h>

/**
 * rev_string - reverse a string
 * @s: The string
 *
 * Return: string
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = strlen(s);
	i = len - 1;
	j = 0;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
