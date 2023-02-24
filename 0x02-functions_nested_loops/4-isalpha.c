#include "main.h"

/**
 * _isalpha - to chech for alphabetic character
 *
 * @c: Parameter to be printed
 *
 * Return: 1 if c is a lower or uppercase
 * and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
