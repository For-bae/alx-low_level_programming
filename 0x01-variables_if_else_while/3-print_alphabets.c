#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	char *lowers, *caps;
	int l, c;

	lowers = "abcdefghijklmnopqrstuvwxyz";
	caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	l = 0;
	c = 0;

	while (l < 26)
	{
		putchar(lowers[l]);
		l++;
	}
	while (c < 27)
	{
		putchar(caps[c]);
		c++;
	}
	return (0);
}
