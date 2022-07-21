#include "main.h"
/**
 * _strncpy - C function that copies a string including the
 * terminating null byte
 * @dest: buffer to store the string copy
 * @src: source string
 * @n: maximum number of bytes from src
 * Return: returns pointers to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
