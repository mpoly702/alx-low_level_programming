#include <stdio.h>

/**
 *  main - This program loves alphabets
 *  Description - Alphabets in ascending order
 *  Return: 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
