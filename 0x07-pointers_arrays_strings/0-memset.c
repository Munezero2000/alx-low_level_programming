#include "main.h"

/**
 * _memeset - 
 * @n bytes of memory of area to fill
 * @b constat bytes to fill into 
 * @s bytes of memory to be filled 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

