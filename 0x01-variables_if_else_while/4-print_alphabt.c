#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	char *message;
	int n;

	message = "abcdfghijklmnoprstuvwxyz";
	n = 0;

	while (n <= 23)
	{
		putchar(message[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
