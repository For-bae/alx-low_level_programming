#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	char *message;
	int n;

	message = "abcdfghijklmnoprstuvwxyz\n";
	n = 0;

	while (n <= 25)
	{
		putchar(message[n]);
		n++;
	}
	return (0);
}
