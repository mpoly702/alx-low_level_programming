#include <stdio.h>

/**
 *  main - This program checks for an exception
 *  Description - This program checks exceptions
 *  Return: 0
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
		putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
