#include "main.h"

/**
 * more_numbers - check the code
 * Description - This is for singing
 * Return: 0
 */

void more_numbers(void)
{

		int i;
		int b;

		for (i = 1; i <= 10; i++)
		{
			for (b = 0; b <= 14; b++)
			{

				if (b > 9)
				{
					_putchar('1');
				}
				_putchar((b % 10) + '0');
			}
			_putchar('\n');
		}
}
