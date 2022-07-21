#include "main.h"
/**
 * _strncat - concatenates two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: end of dest
 * @n: integer parameter to compare index to
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (index = 0; src[index] && < n; index++)
	dest[dest_len++] = src[index];

	return (dest);
}
