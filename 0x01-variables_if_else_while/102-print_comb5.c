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

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				putchar(',');

				if (a != 9 && b != 8 && c != 9 && d != 9)
				{
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
