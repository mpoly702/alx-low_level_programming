#include "main.h"

/**
 * positive_or_negative - Short description, single line
 * @i: Description of parameter i
 *
 * Description: Longer description of the function of i
 (* section header
 * Return: Nothingi
 */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

}
