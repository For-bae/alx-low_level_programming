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
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int length = snprintf( NULL, 0, "%d", n);
    char str[1000];
    snprintf( str, length + 1, "%d", n);

    const char lastDigit = str[strlen(str) - 1];
    int y = atoi(&lastDigit);
    char* message;
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
    else
    {
        message = "";
    }

    printf("Last digit of %s is %c %s", str, lastDigit, message);

    return (0);
}
