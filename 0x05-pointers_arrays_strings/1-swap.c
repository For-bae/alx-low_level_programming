/**
 * swap_int - swaps 2 integers
 * @a: The first number
 * @b: The second number
 *
 * Return: 0 Always.
 */

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
