#include <stdio.h>

/**
 * main - This program loves all alphabets
 * Description - This program displays all alphabets
 * Return: 0
 */

int main(void)
{
	char alphabets;
	char ALPHABETS;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}

	for (ALPHABETS = 'A'; ALPHABETS <= 'Z'; ALPHABETS++)
	{
		putchar(ALPHABETS);
	}
	putchar('\n');
	return (0);
}
