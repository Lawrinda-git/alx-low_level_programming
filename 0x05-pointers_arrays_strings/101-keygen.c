#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function
 *
 * Return: Always 0 after successful
 */
int main(void)
{
	int pass[50];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < 50; i++)
	{
		pass[i] = rand() % 38;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((1777 - sum) - '0' < 38)
		{
			n = 1777 - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
