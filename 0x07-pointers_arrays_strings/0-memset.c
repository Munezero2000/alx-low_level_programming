#include "main.h"

/**
 * _memeset - 
 * @n bytes of memory of area to fill
 * @b constat bytes to fill into 
 * @s bytes of memory to be filled 
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
