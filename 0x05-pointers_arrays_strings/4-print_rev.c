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
	
	len = strlen(str1);
	
	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = str1[len - i - 1];
		s[len - i - 1] = temp;	
	}

	printf("%s\n", s);
}
