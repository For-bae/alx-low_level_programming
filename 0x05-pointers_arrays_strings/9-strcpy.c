#include <string.h>

/**
 * _strcpy - copies string to buffer
 * @dest: The buffer array
 * @src: The source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
