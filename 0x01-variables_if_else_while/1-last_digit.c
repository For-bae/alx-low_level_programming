#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int n, y, lastIndex;
	char str[1000];
	char *message;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	snprintf(str, 1000, "%d", n);
	lastIndex = strlen(str) - 1;
	y = atoi(&str[lastIndex]);
	message = "";
	if (n < 0)
	{
		y = y * -1;
	}
	if (y > 5)
	{
		message = "and is greater than 5";
	}
	else if (y == 0)
	{
		message = "and is 0";
	}
	else if (y < 6 && y != 0)
	{
		message = "and is less than 6 and not 0";
	}
	printf("Last digit of %s is %d %s\n", str, y, message);
	return (0);
}
