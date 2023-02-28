#include "main.h"
/**
 * print_array - a functin that prints n elements of an array
 * @a: input
 * @n: number of elements of array to be printed
 * Return: 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
