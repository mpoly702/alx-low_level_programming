#include <stdio.h>

/**
 *  main - This is one hell of a project
 *  Description - But I am bigger than it
 *  Return: 0
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 99; i++)
	{
		a = i / 10;
		a = i % 10;
		
		for (j = 0; j < 99; j++)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);

				if (a != 9 && b != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
