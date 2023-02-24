#include "main.h"

/**
 * positive_or_negative - To check if it is positive or negative
 *
 * @i: Parameter to be printed
 *
 * Return:always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
