#include <stdio.h>

/**
 *  main - This programprints combinations
 *  Description - This program print letters and numbers
 *  Return: 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
