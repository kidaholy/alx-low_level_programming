#include "main.h"
/**
 * _memcpy: is the function that copy memory area
 * @dest: memory of the address which is stored
 * @src: memory location where it is copied
 * @n: number of bytes
 *
 * Return: copied memory to the changed memory 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

