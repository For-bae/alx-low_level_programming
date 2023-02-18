#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	char *message;
	int n;

	message = "abcdefghijklmnopqrstuvwxyz";
	n = 25;

	while (n >= 0)
	{
		putchar(message[n]);
		n--;
	}
	putchar('\n');
	return (0);
}
