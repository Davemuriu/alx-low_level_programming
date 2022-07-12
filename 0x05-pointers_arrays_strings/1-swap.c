#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: integer to swap
 *
 * @b: Integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

