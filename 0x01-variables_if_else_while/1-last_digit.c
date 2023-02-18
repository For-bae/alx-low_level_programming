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
    char str[1000];
    int lastIndex;
    int y;
    char* message;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    snprintf( str, 1000, "%d", n);
    lastIndex = strlen(str) - 1;
    y = atoi(&str[lastIndex]);
    
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

    printf("Last digit of %s is %c %s\n", str, str[lastIndex], message);

    return (0);
}
