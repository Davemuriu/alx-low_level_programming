#include "main.h"

/**
 * _isupper - function to check uppercase alphabets
 * @c: Int representing a character
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
	return (c >= 65 && c <= 90);
	return (c >= 'A' && c <= 'Z');
}
