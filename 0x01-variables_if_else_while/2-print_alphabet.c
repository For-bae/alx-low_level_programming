#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	char *message;
	int n;

	message = "abcdefghijklmnopqrstuvwxyz\n";
	n = 0;

	while (n <= 26)
	{
		putchar(message[n]);
		n++;
	}
	return (0);
}
