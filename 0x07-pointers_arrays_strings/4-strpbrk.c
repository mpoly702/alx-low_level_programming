#include "main.h"

/**
 * _strpbrk - load memory with a constant byte.
 * @s: initial bytes of the memory
 * @accept: constant byte of b
 * Return: pointer to the resultant string dests
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
