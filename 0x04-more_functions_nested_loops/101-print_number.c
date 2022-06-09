#include "main.h"

/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int j;
	int i, k;

	k = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		j = n;
	while (j / k > 9)
	{
		k = k * 10;
	}
	while (k > 0)
	{
		i = j / k;
		j = j % k;
		_putchar (i + '0');
		k = k / 10;
	}
	}
}
