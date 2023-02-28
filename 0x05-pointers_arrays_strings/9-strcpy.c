#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @src: copy string from
 * @dest: copy string to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int r = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for (; r < q ; r++)
	{
		dest[r] = src[r];
	}
	dest[q] = '\0';
	return (dest);
}
