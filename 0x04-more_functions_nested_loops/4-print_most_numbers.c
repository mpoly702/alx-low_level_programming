#include "main.h"

/**
 * print_numbers - print 0-9
 * @parameter: void
 * return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
