#include "main.h"

/**
 * _memset - populates an aspect of memory with a value
 * @x: start address of memory to be filled
 * @i: the ideal value
 * @j: bytes to be changed
 *
 * Return: array with value for n bytes
 */

char *_memset(char *x, char i, unsigned int j)
{
	int y = 0;

	for (; j > 0; y++)
	{
		x[y] = i;
		j--;
	}
	return (x);
}
