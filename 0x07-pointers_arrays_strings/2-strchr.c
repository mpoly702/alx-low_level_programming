#include "main.h"

/**
 * _strchr - Entrance point
 * @i: input
 * @j: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *i, char j)
{
	int n = 0;

	for (; i[n] >= '\0'; n++)
	{
		if (i[n] == j)
			return (&i[n]);
	}
	return (0);
}
