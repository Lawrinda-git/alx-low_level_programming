#include "main.h"
/**
 * puts2 - starting with first character
 * @str: input
 * Return: 0.
 */
void puts2(char *str)
{
	int longi = 0;
	int f = 0;
	char *p = str;
	int u;

	while (*p != '\0')
	{
		p++;
		longi++;
	}
	f = longi - 1;
	for (u = 0 ; u <= f ; u++)
	{
		if (u % 2 == 0)
	{
		putchar(str[u]);
	}
	}
	putchar('\n');
}
